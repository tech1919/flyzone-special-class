
#include "RankStruct.h"

USTRUCT(BlueprintType)
struct FUserGameInfo
{
    GENERATED_BODY()

public:

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "User")
    FString id;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "User")
    FString username;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "User")
    FGameRank rank;

};
