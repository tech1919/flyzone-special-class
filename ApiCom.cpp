// ApiCom.cpp

#include "ApiCom.h"
#include "Engine/World.h"
#include "HttpModule.h"
#include "Interfaces/IHttpResponse.h"

// Sets default values
AApiCom::AApiCom()
{
    // Set this actor to call Tick() every frame
    PrimaryActorTick.bCanEverTick = true;

    // Set the initial value of Endpoint to a default value
    Endpoint = "http://api.example.com/data";
}

// Called when the game starts or when spawned
void AApiCom::BeginPlay()
{
    Super::BeginPlay();
}

// Called every frame
void AApiCom::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

// Public function for sending a GET request to the API
void AApiCom::SendApiGetRequest()
{
    // Create an HTTP request to the API using the Endpoint variable
    TSharedRef<IHttpRequest> Request = FHttpModule::Get().CreateRequest();
    Request->OnProcessRequestComplete().BindUObject(this, &AApiCom::HandleApiResponse);
    Request->SetURL(Endpoint);
    Request->SetVerb("GET");
    Request->ProcessRequest();
}

// Public function for sending a POST request to the API with a payload
void AApiCom::SendApiPostRequest(const FString& Payload)
{
    // Create an HTTP request to the API using the Endpoint variable
    TSharedRef<IHttpRequest> Request = FHttpModule::Get().CreateRequest();
    Request->OnProcessRequestComplete().BindUObject(this, &AApiCom::HandleApiResponse);
    Request->SetURL(Endpoint);
    Request->SetVerb("POST");
    Request->SetHeader(TEXT("Content-Type"), TEXT("application/json"));
    Request->SetContentAsString(Payload);
    Request->ProcessRequest();
}

// Public function for handling the API response and returning the response object to Blueprint
FHttpResponsePtr AApiCom::GetApiResponse() const
{
    return ApiResponse;
}

// Private function for handling the API response


// Function for converting a struct to a JSON string
FString AApiCom::StructToJsonString(const FMyStruct& MyStruct)
{
    FString JsonString;
    TSharedRef<TJsonWriter<>> JsonWriter = TJsonWriterFactory<>::Create(&JsonString);
    FJsonSerializer::Serialize(TJsonValu e(MyStruct), JsonWriter);
    return JsonString;
}
