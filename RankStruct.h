USTRUCT(BlueprintType)
struct FGameRank
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Game Rank")
    int32 MMR;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Game Rank")
    int32 XP;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Game Rank")
    int32 Division;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Game Rank")
    FString Tier;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Game Rank")
    int32 SubTier;
};
