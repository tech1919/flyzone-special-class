// ApiCom.h

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ApiCom.generated.h"

UCLASS()
class MYPROJECT_API AApiCom : public AActor
{
    GENERATED_BODY()

public:
    // Sets default values for this actor's properties
    AApiCom();

    // Called when the game starts or when spawned
    virtual void BeginPlay() override;

    // Called every frame
    virtual void Tick(float DeltaTime) override;

    // Public function for sending a GET request to the API
    UFUNCTION(BlueprintCallable, Category = "API")
    void SendApiGetRequest();

    // Public function for sending a POST request to the API with a payload
    UFUNCTION(BlueprintCallable, Category = "API")
    void SendApiPostRequest(const FString& Payload);

    // Public variable to store the API endpoint URL
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "API")
    FString Endpoint;

    // Public function for handling the API response and returning the response object to Blueprint
    UFUNCTION(BlueprintCallable, Category = "API")
    FHttpResponsePtr GetApiResponse() const;

    // Function for converting a struct to a JSON string
    FString StructToJsonString(const FMyStruct& MyStruct);

private:
    // Private function for handling the API response
    void HandleApiResponse(FHttpResponsePtr Response, bool bSuccessful);

    // Private function for getting a value from the API
    int32 GetSomeValue();

    // Private variable to store the API response object
    FHttpResponsePtr ApiResponse;
};
