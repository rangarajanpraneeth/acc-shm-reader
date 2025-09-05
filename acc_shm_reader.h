#ifndef ACC_SHM_H
#define ACC_SHM_H

#include <windows.h>

#pragma pack(push, 1)

// TODO: implement the 5 or something other missing enums

// TODO: change all the member names

enum class ACC_STATUS : int
{
   ACC_OFF = 0,
   ACC_REPLAY = 1,
   ACC_LIVE = 2,
   ACC_PAUSE = 3
};

enum class ACC_SESSION_TYPE : int
{
   ACC_UNKNOWN = -1,
   ACC_PRACTICE = 0,
   ACC_QUALIFY = 1,
   ACC_RACE = 2,
   ACC_HOTLAP = 3,
   ACC_TIME_ATTACK = 4,
   ACC_DRIFT = 5,
   ACC_DRAG = 6,
   ACC_HOTSTINT = 7,
   ACC_HOTSTINTSUPERPOLE = 8
};

enum class ACC_FLAG_TYPE : int
{
   ACC_NO_FLAG = 0,
   ACC_BLUE_FLAG = 1,
   ACC_YELLOW_FLAG = 2,
   ACC_BLACK_FLAG = 3,
   ACC_WHITE_FLAG = 4,
   ACC_CHECKERED_FLAG = 5,
   ACC_PENALTY_FLAG = 6,
   ACC_GREEN_FLAG = 7,
   ACC_ORANGE_FLAG = 8
};

struct SPageFileGraphics
{
   int packetId;
   ACC_STATUS status;
   ACC_SESSION_TYPE session;
   wchar_t currentTime[15];
   wchar_t lastTime[15];
   wchar_t bestTime[15];
   wchar_t split[15];
   int completedLaps;
   int position;
   int iCurrentTime;
   int iLastTime;
   int iBestTime;
   float sessionTimeLeft;
   float distanceTraveled;
   int isInPit;
   int currentSectorIndex;
   int lastSectorTime;
   int numberOfLaps;
   wchar_t tyreCompound[34];
   float replayTimeMultiplier;
   float normalizedCarPosition;
   int activeCars;
   float carCoordinates[60][3];
   int carID[60];
   int playerCarID;
   float penaltyTime;
   ACC_FLAG_TYPE flag;
   int penalty;
   int idealLineOn;
   int isInPitLane;
   float surfaceGrip;
   int mandatoryPitDone;
   float windSpeed;
   float windDirection;
   int isSetupMenuVisible;
   int mainDisplayIndex;
   int secondaryDisplayIndex;
   int TC;
   int TCCUT;
   int EngineMap;
   int ABS;
   float fuelXLap;
   int rainLights;
   int flashingLights;
   int lightsStage;
   float exhaustTemperature;
   int wiperLV;
   int driverStintTotalTimeLeft;
   int driverStintTimeLeft;
   int rainTyres;
   int sessionIndex;
   float usedFuel;
   wchar_t deltaLapTime[16];
   int iDeltaLapTime;
   wchar_t estimatedLapTime[16];
   int iEstimatedLapTime;
   int isDeltaPositive;
   int iSplit;
   int isValidLap;
   float fuelEstimatedLaps;
   wchar_t trackStatus[34];
   int missingMandatoryPits;
   float clock;
   int directionLightsLeft;
   int directionLightsRight;
   int globalYellow;
   int globalYellow1;
   int globalYellow2;
   int globalYellow3;
   int globalWhite;
   int globalGreen;
   int globalChequered;
   int globalRed;
   int mfdTyreSet;
   float mfdFuelToAdd;
   float mfdTyrePressureLF;
   float mfdTyrePressureRF;
   float mfdTyrePressureLR;
   float mfdTyrePressureRR;
   int trackGripStatus;
   int rainIntensity;
   int rainIntensityIn10min;
   int rainIntensityIn30min;
   int currentTyreSet;
   int strategyTyreSet;
   int gapAhead;
   int gapBehind;
};

struct SPageFilePhysics
{
   int packetId;
   float gas;
   float brake;
   float fuel;
   int gear;
   int rpm;
   float steerAngle;
   float speedKmh;
   float velocity[3];
   float accG[3];
   float wheelSlip[4];
   float wheelLoad[4];
   float wheelPressure[4];
   float wheelAngularSpeed[4];
   float tyreWear[4];
   float tyreDirtyLevel[4];
   float tyreCoreTemp[4];
   float camberRAD[4];
   float suspensionTravel[4];
   float drs;
   float tc;
   float heading;
   float pitch;
   float roll;
   float cgHeight;
   float carDamage[5];
   int numberOfTyresOut;
   int pitLimiterOn;
   float abs;
   float kersCharge;
   float kersInput;
   int autoShifterOn;
   float rideHeight[2];
   float turboBoost;
   float ballast;
   float airDensity;
   float airTemp;
   float roadTemp;
   float localAngularVel[3];
   float finalFF;
   float performanceMeter;
   int engineBrake;
   int ersRecoveryLevel;
   int ersPowerLevel;
   int ersHeatCharging;
   int ersIsCharging;
   float kersCurrentKJ;
   int drsAvailable;
   int drsEnabled;
   float brakeTemp[4];
   float clutch;
   float tyreTempI[4];
   float tyreTempM[4];
   float tyreTempO[4];
   int isAIControlled;
   float tyreContactPoint[4][3];
   float tyreContactNormal[4][3];
   float tyreContactHeading[4][3];
   float brakeBias;
   float localVelocity[3];
   int p2pActivation;
   int p2pStatus;
   float currentMaxRpm;
   float mz[4];
   float fx[4];
   float fy[4];
   float slipRatio[4];
   float slipAngle[4];
   int tcinAction;
   int absInAction;
   float suspensionDamage[4];
   float tyreTemp[4];
   float waterTemp;
   float brakePressure[4];
   int frontBrakeCompound;
   int rearBrakeCompound;
   float padLife[4];
   float discLife[4];
   int ignitionOn;
   int starterEngineOn;
   int isEngineRunning;
   float kerbVibration;
   float slipVibrations;
   float gVibrations;
   float absVibrations;
};

struct SPageFileStatic
{
   wchar_t smVersion[15];
   wchar_t acVersion[15];
   int numberOfSessions;
   int numCars;
   wchar_t carModel[33];
   wchar_t track[33];
   wchar_t playerName[33];
   wchar_t playerSurname[33];
   wchar_t playerNick[33];
   int sectorCount;
   float maxTorque;
   float maxPower;
   int maxRpm;
   float maxFuel;
   float suspensionMaxTravel[4];
   float tyreRadius[4];
   float maxTurboBoost;
   float deprecated_1;
   float deprecated_2;
   int penaltiesEnabled;
   float aidFuelRate;
   float aidTireRate;
   float aidMechanicalDamage;
   int aidAllowTyreBlankets;
   float aidStability;
   int aidAutoClutch;
   int aidAutoBlip;
   int hasDRS;
   int hasERS;
   int hasKERS;
   float kersMaxJ;
   int engineBrakeSettingsCount;
   int ersPowerControllerCount;
   float trackSplineLength;
   wchar_t trackConfiguration[33];
   float ersMaxJ;
   int isTimedRace;
   int hasExtraLap;
   wchar_t carSkin[33];
   int reversedGridPositions;
   int PitWindowStart;
   int PitWindowEnd;
   int isOnline;
   wchar_t dryTyresName[33];
   wchar_t wetTyresName[33];
};

#pragma pack(pop)

template <typename T>
struct SharedMemory
{
   HANDLE handle;
   T *buffer;

   SharedMemory(const WCHAR *name)
   {
      handle = OpenFileMappingW(FILE_MAP_READ, FALSE, name);
      if (handle == NULL)
      {
         buffer = nullptr;
         return;
      }

      buffer = (T *)MapViewOfFile(handle, FILE_MAP_READ, 0, 0, sizeof(T));
      if (buffer == nullptr)
      {
         CloseHandle(handle);
         handle = NULL;
      }
   }

   ~SharedMemory()
   {
      if (buffer != nullptr)
      {
         UnmapViewOfFile(buffer);
      }
      if (handle != nullptr)
      {
         CloseHandle(handle);
      }
   }
};

#endif
