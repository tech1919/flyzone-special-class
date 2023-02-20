USTRUCT(BlueprintType)
struct FDroneFlightInfo
{
    GENERATED_BODY()

public:

    // positional data

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "DroneFlightInfo")
    float altitude;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "DroneFlightInfo")
    float position;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "DroneFlightInfo")
    float velocity;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "DroneFlightInfo")
    float acceleration;


    // mission data
    // [batterylevel / time * x]
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "DroneFlightInfo")
    float BatteryLevel;  

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "DroneFlightInfo")
    int32 achivments_abs;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "DroneFlightInfo")
    float mission_percentage;

    // pilot control data

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "DroneFlightInfo")
    float tilt_diff;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "DroneFlightInfo")
    float yaw_diff;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "DroneFlightInfo")
    float pitch_diff;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "DroneFlightInfo")
    int32 collisions;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "DroneFlightInfo")
    int32 close_calls;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "DroneFlightInfo")
    int32 communication_loss;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "DroneFlightInfo")
    int32 flight_alerts;


    // prev pilot info

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "DroneFlightInfo")
    int32 prev_pilot_xp;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "DroneFlightInfo")
    int32 prev_pilot_mmr;

    // level info

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "DroneFlightInfo")
    int32 level_xp;

};
