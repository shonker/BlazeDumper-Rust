#pragma once
#include <cstdint>

namespace blazedumper {
    constexpr ::std::ptrdiff_t BaseEntity_TypeInfo = 0x323F588;
    constexpr ::std::ptrdiff_t MainCamera_TypeInfo = 0x3241180;
    constexpr ::std::ptrdiff_t Facepunch_Input_TypeInfo = 0x3251978;
    namespace BasePlayer {
        constexpr ::std::ptrdiff_t __menuOption_Climb = 0x240; // Option
        constexpr ::std::ptrdiff_t __menuOption_Drink = 0x298; // Option
        constexpr ::std::ptrdiff_t __menuOption_InviteToTeam = 0x2F0; // Option
        constexpr ::std::ptrdiff_t __menuOption_Menu_AssistPlayer = 0x348; // Option
        constexpr ::std::ptrdiff_t __menuOption_Menu_LootPlayer = 0x3A0; // Option
        constexpr ::std::ptrdiff_t __menuOption_Promote = 0x3F8; // Option
        constexpr ::std::ptrdiff_t __menuOption_SaltWater = 0x450; // Option
        constexpr ::std::ptrdiff_t currentViewMode = 0x4A8; // BasePlayer.CameraMode
        constexpr ::std::ptrdiff_t selectedViewMode = 0x4AC; // BasePlayer.CameraMode
        constexpr ::std::ptrdiff_t lastRevivePoint = 0x4B0; // Vector3
        constexpr ::std::ptrdiff_t lastReviveDirection = 0x4BC; // Vector3
        constexpr ::std::ptrdiff_t playerModel = 0x4C8; // PlayerModel
        constexpr ::std::ptrdiff_t Frozen = 0x4D0; // bool
        constexpr ::std::ptrdiff_t voiceRecorder = 0x4D8; // PlayerVoiceRecorder
        constexpr ::std::ptrdiff_t voiceSpeaker = 0x4E0; // PlayerVoiceSpeaker
        constexpr ::std::ptrdiff_t input = 0x4E8; // PlayerInput
        constexpr ::std::ptrdiff_t movement = 0x4F0; // BaseMovement
        constexpr ::std::ptrdiff_t collision = 0x4F8; // BaseCollision
        constexpr ::std::ptrdiff_t _lookingAt = 0x500; // GameObject
        constexpr ::std::ptrdiff_t _lookingAtEntity = 0x508; // BaseEntity
        constexpr ::std::ptrdiff_t _lookingAtCollider = 0x510; // Collider
        constexpr ::std::ptrdiff_t lookingAtPoint = 0x518; // Vector3
        constexpr ::std::ptrdiff_t wakeTime = 0x524; // float
        constexpr ::std::ptrdiff_t needsClothesRebuild = 0x528; // bool
        constexpr ::std::ptrdiff_t wasSleeping = 0x529; // bool
        constexpr ::std::ptrdiff_t wokeUpBefore = 0x52A; // bool
        constexpr ::std::ptrdiff_t wasDead = 0x52B; // bool
        constexpr ::std::ptrdiff_t lastClothesHash = 0x52C; // uint
        constexpr ::std::ptrdiff_t IsWearingDiveGoggles = 0x530; // bool
        constexpr ::std::ptrdiff_t GestureViewModel = 0x538; // ViewModel
        constexpr ::std::ptrdiff_t timeSinceUpdatedLookingAt = 0x540; // RealTimeSince
        constexpr ::std::ptrdiff_t nextTopologyTestTime = 0x544; // float
        constexpr ::std::ptrdiff_t usePressTime = 0x548; // float
        constexpr ::std::ptrdiff_t useHeldTime = 0x54C; // float
        constexpr ::std::ptrdiff_t lookingAtTest = 0x550; // HitTest
        constexpr ::std::ptrdiff_t cachedWaterDrinkingPoint = 0x558; // Vector3
        constexpr ::std::ptrdiff_t gestureList = 0x568; // GestureCollection
        constexpr ::std::ptrdiff_t gestureFinishedTime = 0x570; // TimeUntil
        constexpr ::std::ptrdiff_t blockHeldInputTimer = 0x574; // TimeSince
        constexpr ::std::ptrdiff_t currentGesture = 0x578; // GestureConfig
        constexpr ::std::ptrdiff_t disabledHeldEntity = 0x580; // HeldEntity
        constexpr ::std::ptrdiff_t nextGestureMenuOpenTime = 0x588; // float
        constexpr ::std::ptrdiff_t lastGestureCancel = 0x58C; // TimeSince
        constexpr ::std::ptrdiff_t client_lastHelloTime = 0x590; // float
        constexpr ::std::ptrdiff_t currentTeam = 0x598; // ulong
        constexpr ::std::ptrdiff_t clientTeam = 0x5A0; // PlayerTeam
        constexpr ::std::ptrdiff_t lastReceivedTeamTime = 0x5A8; // float
        constexpr ::std::ptrdiff_t lastPresenceTeamId = 0x5B0; // ulong
        constexpr ::std::ptrdiff_t lastPresenceTeamSize = 0x5B8; // int
        constexpr ::std::ptrdiff_t playerGroupKey = 0x5C0; // string
        constexpr ::std::ptrdiff_t playerGroupSizeKey = 0x5C8; // string
        constexpr ::std::ptrdiff_t clActiveItem = 0x5D0; // uint
        constexpr ::std::ptrdiff_t ClientCurrentMapNote = 0x5D8; // MapNote
        constexpr ::std::ptrdiff_t ClientCurrentDeathNote = 0x5E0; // MapNote
        constexpr ::std::ptrdiff_t missions = 0x5E8; // List<BaseMission.MissionInstance>
        constexpr ::std::ptrdiff_t _activeMission = 0x5F0; // int
        constexpr ::std::ptrdiff_t modelState = 0x5F8; // ModelState
        constexpr ::std::ptrdiff_t mounted = 0x600; // EntityRef
        constexpr ::std::ptrdiff_t nextSeatSwapTime = 0x610; // float
        constexpr ::std::ptrdiff_t PetEntity = 0x618; // BaseEntity
        constexpr ::std::ptrdiff_t lastPetCommandIssuedTime = 0x620; // float
        constexpr ::std::ptrdiff_t PetPrefabID = 0x624; // uint
        constexpr ::std::ptrdiff_t PetID = 0x628; // uint
        constexpr ::std::ptrdiff_t cachedBuildingPrivilegeTime = 0x62C; // float
        constexpr ::std::ptrdiff_t cachedBuildingPrivilege = 0x630; // BuildingPrivlidge
        constexpr ::std::ptrdiff_t maxProjectileID = 0x638; // int
        constexpr ::std::ptrdiff_t lastUpdateTime = 0x63C; // float
        constexpr ::std::ptrdiff_t cachedThreatLevel = 0x640; // float
        constexpr ::std::ptrdiff_t serverTickRate = 0x644; // int
        constexpr ::std::ptrdiff_t clientTickRate = 0x648; // int
        constexpr ::std::ptrdiff_t serverTickInterval = 0x64C; // float
        constexpr ::std::ptrdiff_t clientTickInterval = 0x650; // float
        constexpr ::std::ptrdiff_t lastSentTickTime = 0x654; // float
        constexpr ::std::ptrdiff_t lastTickStopwatch = 0x658; // Stopwatch
        constexpr ::std::ptrdiff_t lastSentTick = 0x660; // PlayerTick
        constexpr ::std::ptrdiff_t nextVisThink = 0x668; // float
        constexpr ::std::ptrdiff_t lastTimeSeen = 0x66C; // float
        constexpr ::std::ptrdiff_t debugPrevVisible = 0x670; // bool
        constexpr ::std::ptrdiff_t fallDamageEffect = 0x678; // GameObjectRef
        constexpr ::std::ptrdiff_t drownEffect = 0x680; // GameObjectRef
        constexpr ::std::ptrdiff_t playerFlags = 0x688; // BasePlayer.PlayerFlags
        constexpr ::std::ptrdiff_t eyes = 0x690; // PlayerEyes
        constexpr ::std::ptrdiff_t inventory = 0x698; // PlayerInventory
        constexpr ::std::ptrdiff_t blueprints = 0x6A0; // PlayerBlueprints
        constexpr ::std::ptrdiff_t metabolism = 0x6A8; // PlayerMetabolism
        constexpr ::std::ptrdiff_t modifiers = 0x6B0; // PlayerModifiers
        constexpr ::std::ptrdiff_t playerCollider = 0x6B8; // CapsuleCollider
        constexpr ::std::ptrdiff_t Belt = 0x6C0; // PlayerBelt
        constexpr ::std::ptrdiff_t playerRigidbody = 0x6C8; // Rigidbody
        constexpr ::std::ptrdiff_t userID = 0x6D0; // ulong
        constexpr ::std::ptrdiff_t UserIDString = 0x6D8; // string
        constexpr ::std::ptrdiff_t gamemodeteam = 0x6E0; // int
        constexpr ::std::ptrdiff_t reputation = 0x6E4; // int
        constexpr ::std::ptrdiff_t _displayName = 0x6E8; // string
        constexpr ::std::ptrdiff_t _lastSetName = 0x6F0; // string
        constexpr ::std::ptrdiff_t playerColliderStanding = 0x6F8; // BasePlayer.CapsuleColliderInfo
        constexpr ::std::ptrdiff_t playerColliderDucked = 0x70C; // BasePlayer.CapsuleColliderInfo
        constexpr ::std::ptrdiff_t playerColliderCrawling = 0x720; // BasePlayer.CapsuleColliderInfo
        constexpr ::std::ptrdiff_t playerColliderLyingDown = 0x734; // BasePlayer.CapsuleColliderInfo
        constexpr ::std::ptrdiff_t cachedProtection = 0x748; // ProtectionProperties
        constexpr ::std::ptrdiff_t lastHeadshotSoundTime = 0x750; // float
        constexpr ::std::ptrdiff_t nextColliderRefreshTime = 0x754; // float
        constexpr ::std::ptrdiff_t clothingBlocksAiming = 0x758; // bool
        constexpr ::std::ptrdiff_t clothingMoveSpeedReduction = 0x75C; // float
        constexpr ::std::ptrdiff_t clothingWaterSpeedBonus = 0x760; // float
        constexpr ::std::ptrdiff_t clothingAccuracyBonus = 0x764; // float
        constexpr ::std::ptrdiff_t equippingBlocked = 0x768; // bool
        constexpr ::std::ptrdiff_t eggVision = 0x76C; // float
        constexpr ::std::ptrdiff_t activeTelephone = 0x770; // PhoneController
        constexpr ::std::ptrdiff_t designingAIEntity = 0x778; // BaseEntity
    } // namespace BasePlayer
    namespace BaseEntity {
        constexpr ::std::ptrdiff_t ragdoll = 0x78; // Ragdoll
        constexpr ::std::ptrdiff_t positionLerp = 0x80; // PositionLerp
        constexpr ::std::ptrdiff_t menuOptions = 0x88; // List<Option>
        constexpr ::std::ptrdiff_t broadcastProtocol = 0x90; // uint
        constexpr ::std::ptrdiff_t links = 0x98; // List<EntityLink>
        constexpr ::std::ptrdiff_t linkedToNeighbours = 0xA0; // bool
        constexpr ::std::ptrdiff_t _pendingFileRequests = 0xA8; // List<BaseEntity.ServerFileRequest>
        constexpr ::std::ptrdiff_t updateParentingAction = 0xB0; // Action
        constexpr ::std::ptrdiff_t addedToParentEntity = 0xB8; // BaseEntity
        constexpr ::std::ptrdiff_t itemSkin = 0xC0; // ItemSkin
        constexpr ::std::ptrdiff_t entitySlots = 0xC8; // EntityRef[]
        constexpr ::std::ptrdiff_t triggers = 0xD0; // List<TriggerBase>
        constexpr ::std::ptrdiff_t isVisible = 0xD8; // bool
        constexpr ::std::ptrdiff_t isAnimatorVisible = 0xD9; // bool
        constexpr ::std::ptrdiff_t isShadowVisible = 0xDA; // bool
        constexpr ::std::ptrdiff_t localOccludee = 0xE0; // OccludeeSphere
        constexpr ::std::ptrdiff_t Weight = 0x100; // float
        constexpr ::std::ptrdiff_t bounds = 0x104; // Bounds
        constexpr ::std::ptrdiff_t impactEffect = 0x120; // GameObjectRef
        constexpr ::std::ptrdiff_t enableSaving = 0x128; // bool
        constexpr ::std::ptrdiff_t syncPosition = 0x129; // bool
        constexpr ::std::ptrdiff_t model = 0x130; // Model
        constexpr ::std::ptrdiff_t flags = 0x138; // BaseEntity.Flags
        constexpr ::std::ptrdiff_t parentBone = 0x13C; // uint
        constexpr ::std::ptrdiff_t skinID = 0x140; // ulong
        constexpr ::std::ptrdiff_t _components = 0x148; // EntityComponentBase[]
        constexpr ::std::ptrdiff_t HasBrain = 0x150; // bool
        constexpr ::std::ptrdiff_t _name = 0x158; // string
        constexpr ::std::ptrdiff_t OwnerID = 0x160; // ulong
    } // namespace BaseEntity
    namespace BaseCombatEntity {
        constexpr ::std::ptrdiff_t __menuOption_Menu_Pickup = 0x168; // Option
        constexpr ::std::ptrdiff_t skeletonProperties = 0x1C0; // SkeletonProperties
        constexpr ::std::ptrdiff_t baseProtection = 0x1C8; // ProtectionProperties
        constexpr ::std::ptrdiff_t startHealth = 0x1D0; // float
        constexpr ::std::ptrdiff_t pickup = 0x1D8; // BaseCombatEntity.Pickup
        constexpr ::std::ptrdiff_t repair = 0x1F8; // BaseCombatEntity.Repair
        constexpr ::std::ptrdiff_t ShowHealthInfo = 0x220; // bool
        constexpr ::std::ptrdiff_t lifestate = 0x224; // BaseCombatEntity.LifeState
        constexpr ::std::ptrdiff_t sendsHitNotification = 0x228; // bool
        constexpr ::std::ptrdiff_t sendsMeleeHitNotification = 0x229; // bool
        constexpr ::std::ptrdiff_t markAttackerHostile = 0x22A; // bool
        constexpr ::std::ptrdiff_t _health = 0x22C; // float
        constexpr ::std::ptrdiff_t _maxHealth = 0x230; // float
        constexpr ::std::ptrdiff_t faction = 0x234; // BaseCombatEntity.Faction
        constexpr ::std::ptrdiff_t deathTime = 0x238; // float
        constexpr ::std::ptrdiff_t lastNotifyFrame = 0x23C; // int
    } // namespace BaseCombatEntity
    namespace BuildingPrivlidge {
        constexpr ::std::ptrdiff_t __menuOption_Menu_MaxAuth = 0x3D0; // Option
        constexpr ::std::ptrdiff_t __menuOption_Menu_RotateVM = 0x428; // Option
        constexpr ::std::ptrdiff_t __menuOption_MenuAuthorize = 0x480; // Option
        constexpr ::std::ptrdiff_t __menuOption_MenuClearList = 0x4D8; // Option
        constexpr ::std::ptrdiff_t __menuOption_MenuDeauthorize = 0x530; // Option
        constexpr ::std::ptrdiff_t cachedProtectedMinutes = 0x588; // float
        constexpr ::std::ptrdiff_t cachedUpkeepPeriodMinutes = 0x58C; // float
        constexpr ::std::ptrdiff_t cachedUpkeepCostFraction = 0x590; // float
        constexpr ::std::ptrdiff_t authorizedPlayers = 0x598; // List<PlayerNameID>
        constexpr ::std::ptrdiff_t allowedConstructionItems = 0x5A0; // List<ItemDefinition>
    } // namespace BuildingPrivlidge
    namespace BaseProjectile {
        constexpr ::std::ptrdiff_t NoiseRadius = 0x280; // float
        constexpr ::std::ptrdiff_t damageScale = 0x284; // float
        constexpr ::std::ptrdiff_t distanceScale = 0x288; // float
        constexpr ::std::ptrdiff_t projectileVelocityScale = 0x28C; // float
        constexpr ::std::ptrdiff_t automatic = 0x290; // bool
        constexpr ::std::ptrdiff_t usableByTurret = 0x291; // bool
        constexpr ::std::ptrdiff_t turretDamageScale = 0x294; // float
        constexpr ::std::ptrdiff_t attackFX = 0x298; // GameObjectRef
        constexpr ::std::ptrdiff_t silencedAttack = 0x2A0; // GameObjectRef
        constexpr ::std::ptrdiff_t muzzleBrakeAttack = 0x2A8; // GameObjectRef
        constexpr ::std::ptrdiff_t MuzzlePoint = 0x2B0; // Transform
        constexpr ::std::ptrdiff_t reloadTime = 0x2B8; // float
        constexpr ::std::ptrdiff_t canUnloadAmmo = 0x2BC; // bool
        constexpr ::std::ptrdiff_t primaryMagazine = 0x2C0; // BaseProjectile.Magazine
        constexpr ::std::ptrdiff_t fractionalReload = 0x2C8; // bool
        constexpr ::std::ptrdiff_t reloadStartDuration = 0x2CC; // float
        constexpr ::std::ptrdiff_t reloadFractionDuration = 0x2D0; // float
        constexpr ::std::ptrdiff_t reloadEndDuration = 0x2D4; // float
        constexpr ::std::ptrdiff_t aimSway = 0x2D8; // float
        constexpr ::std::ptrdiff_t aimSwaySpeed = 0x2DC; // float
        constexpr ::std::ptrdiff_t recoil = 0x2E0; // RecoilProperties
        constexpr ::std::ptrdiff_t aimconeCurve = 0x2E8; // AnimationCurve
        constexpr ::std::ptrdiff_t aimCone = 0x2F0; // float
        constexpr ::std::ptrdiff_t hipAimCone = 0x2F4; // float
        constexpr ::std::ptrdiff_t aimconePenaltyPerShot = 0x2F8; // float
        constexpr ::std::ptrdiff_t aimConePenaltyMax = 0x2FC; // float
        constexpr ::std::ptrdiff_t aimconePenaltyRecoverTime = 0x300; // float
        constexpr ::std::ptrdiff_t aimconePenaltyRecoverDelay = 0x304; // float
        constexpr ::std::ptrdiff_t stancePenaltyScale = 0x308; // float
        constexpr ::std::ptrdiff_t hasADS = 0x30C; // bool
        constexpr ::std::ptrdiff_t noAimingWhileCycling = 0x30D; // bool
        constexpr ::std::ptrdiff_t manualCycle = 0x30E; // bool
        constexpr ::std::ptrdiff_t needsCycle = 0x30F; // bool
        constexpr ::std::ptrdiff_t isCycling = 0x310; // bool
        constexpr ::std::ptrdiff_t aiming = 0x311; // bool
        constexpr ::std::ptrdiff_t resetDuration = 0x314; // float
        constexpr ::std::ptrdiff_t numShotsFired = 0x318; // int
        constexpr ::std::ptrdiff_t nextReloadTime = 0x31C; // float
        constexpr ::std::ptrdiff_t startReloadTime = 0x320; // float
        constexpr ::std::ptrdiff_t stancePenalty = 0x324; // float
        constexpr ::std::ptrdiff_t aimconePenalty = 0x328; // float
        constexpr ::std::ptrdiff_t cachedModHash = 0x32C; // uint
        constexpr ::std::ptrdiff_t sightAimConeScale = 0x330; // float
        constexpr ::std::ptrdiff_t sightAimConeOffset = 0x334; // float
        constexpr ::std::ptrdiff_t hipAimConeScale = 0x338; // float
        constexpr ::std::ptrdiff_t hipAimConeOffset = 0x33C; // float
        constexpr ::std::ptrdiff_t isReloading = 0x340; // bool
        constexpr ::std::ptrdiff_t swaySampleTime = 0x344; // float
        constexpr ::std::ptrdiff_t lastShotTime = 0x348; // float
        constexpr ::std::ptrdiff_t reloadPressTime = 0x34C; // float
        constexpr ::std::ptrdiff_t ammoTypePreReload = 0x350; // ItemDefinition
        constexpr ::std::ptrdiff_t fractionalReloadDesiredCount = 0x358; // int
        constexpr ::std::ptrdiff_t fractionalReloadNumAdded = 0x35C; // int
        constexpr ::std::ptrdiff_t triggerReady = 0x360; // bool
        constexpr ::std::ptrdiff_t nextHeightCheckTime = 0x364; // float
        constexpr ::std::ptrdiff_t cachedUnderground = 0x368; // bool
        constexpr ::std::ptrdiff_t createdProjectiles = 0x370; // List<Projectile>
    } // namespace BaseProjectile
    namespace Magazine {
        constexpr ::std::ptrdiff_t definition = 0x10; // BaseProjectile.Magazine.Definition
        constexpr ::std::ptrdiff_t capacity = 0x18; // int
        constexpr ::std::ptrdiff_t contents = 0x1C; // int
        constexpr ::std::ptrdiff_t ammoType = 0x20; // ItemDefinition
    } // namespace Magazine
    namespace PlayerInventory {
        constexpr ::std::ptrdiff_t containerMain = 0x20; // ItemContainer
        constexpr ::std::ptrdiff_t containerBelt = 0x28; // ItemContainer
        constexpr ::std::ptrdiff_t containerWear = 0x30; // ItemContainer
        constexpr ::std::ptrdiff_t crafting = 0x38; // ItemCrafter
        constexpr ::std::ptrdiff_t loot = 0x40; // PlayerLoot
    } // namespace PlayerInventory
    namespace ItemContainer {
        constexpr ::std::ptrdiff_t flags = 0x10; // ItemContainer.Flag
        constexpr ::std::ptrdiff_t allowedContents = 0x14; // ItemContainer.ContentsType
        constexpr ::std::ptrdiff_t onlyAllowedItems = 0x18; // ItemDefinition[]
        constexpr ::std::ptrdiff_t availableSlots = 0x20; // List<ItemSlot>
        constexpr ::std::ptrdiff_t capacity = 0x28; // int
        constexpr ::std::ptrdiff_t uid = 0x2C; // uint
        constexpr ::std::ptrdiff_t dirty = 0x30; // bool
        constexpr ::std::ptrdiff_t itemList = 0x38; // List<Item>
        constexpr ::std::ptrdiff_t temperature = 0x40; // float
        constexpr ::std::ptrdiff_t parent = 0x48; // Item
        constexpr ::std::ptrdiff_t playerOwner = 0x50; // BasePlayer
        constexpr ::std::ptrdiff_t entityOwner = 0x58; // BaseEntity
        constexpr ::std::ptrdiff_t isServer = 0x60; // bool
        constexpr ::std::ptrdiff_t maxStackSize = 0x64; // int
    } // namespace ItemContainer
    namespace PlayerModel {
        constexpr ::std::ptrdiff_t _smoothAimWeight = 0x18; // float
        constexpr ::std::ptrdiff_t _smoothVelocity = 0x1C; // float
        constexpr ::std::ptrdiff_t _smoothlookAngle = 0x20; // Vector3
        constexpr ::std::ptrdiff_t allowMountedHeadLook = 0x2C; // bool
        constexpr ::std::ptrdiff_t smoothLookDir = 0x30; // Vector3
        constexpr ::std::ptrdiff_t lastSafeLookDir = 0x3C; // Vector3
        constexpr ::std::ptrdiff_t Shoulders = 0x48; // Transform[]
        constexpr ::std::ptrdiff_t AdditionalSpineBones = 0x50; // Transform[]
        constexpr ::std::ptrdiff_t LegParts = 0x58; // List<SkinnedMeshRenderer>
        constexpr ::std::ptrdiff_t fakeSpineBones = 0x60; // Transform[]
        constexpr ::std::ptrdiff_t extraLeanBack = 0x68; // float
        constexpr ::std::ptrdiff_t timeInArmsMode = 0x70; // float
        constexpr ::std::ptrdiff_t collision = 0x78; // BoxCollider
        constexpr ::std::ptrdiff_t censorshipCube = 0x80; // GameObject
        constexpr ::std::ptrdiff_t censorshipCubeBreasts = 0x88; // GameObject
        constexpr ::std::ptrdiff_t jawBone = 0x90; // GameObject
        constexpr ::std::ptrdiff_t neckBone = 0x98; // GameObject
        constexpr ::std::ptrdiff_t headBone = 0xA0; // GameObject
        constexpr ::std::ptrdiff_t eyeController = 0xA8; // EyeController
        constexpr ::std::ptrdiff_t blinkController = 0xB0; // EyeBlink
        constexpr ::std::ptrdiff_t SpineBones = 0xB8; // Transform[]
        constexpr ::std::ptrdiff_t leftFootBone = 0xC0; // Transform
        constexpr ::std::ptrdiff_t rightFootBone = 0xC8; // Transform
        constexpr ::std::ptrdiff_t leftHandPropBone = 0xD0; // Transform
        constexpr ::std::ptrdiff_t rightHandPropBone = 0xD8; // Transform
        constexpr ::std::ptrdiff_t rightHandTarget = 0xE0; // Vector3
        constexpr ::std::ptrdiff_t leftHandTargetPosition = 0xEC; // Vector3
        constexpr ::std::ptrdiff_t leftHandTargetRotation = 0xF8; // Quaternion
        constexpr ::std::ptrdiff_t rightHandTargetPosition = 0x108; // Vector3
        constexpr ::std::ptrdiff_t rightHandTargetRotation = 0x114; // Quaternion
        constexpr ::std::ptrdiff_t steeringTargetDegrees = 0x124; // float
        constexpr ::std::ptrdiff_t rightFootTargetPosition = 0x128; // Vector3
        constexpr ::std::ptrdiff_t rightFootTargetRotation = 0x134; // Quaternion
        constexpr ::std::ptrdiff_t leftFootTargetPosition = 0x144; // Vector3
        constexpr ::std::ptrdiff_t leftFootTargetRotation = 0x150; // Quaternion
        constexpr ::std::ptrdiff_t CinematicAnimationController = 0x160; // RuntimeAnimatorController
        constexpr ::std::ptrdiff_t DefaultAvatar = 0x168; // Avatar
        constexpr ::std::ptrdiff_t CinematicAvatar = 0x170; // Avatar
        constexpr ::std::ptrdiff_t DefaultHoldType = 0x178; // RuntimeAnimatorController
        constexpr ::std::ptrdiff_t SleepGesture = 0x180; // RuntimeAnimatorController
        constexpr ::std::ptrdiff_t CrawlToIncapacitatedGesture = 0x188; // RuntimeAnimatorController
        constexpr ::std::ptrdiff_t StandToIncapacitatedGesture = 0x190; // RuntimeAnimatorController
        constexpr ::std::ptrdiff_t CurrentGesture = 0x198; // RuntimeAnimatorController
        constexpr ::std::ptrdiff_t MaleSkin = 0x1A0; // SkinSetCollection
        constexpr ::std::ptrdiff_t FemaleSkin = 0x1A8; // SkinSetCollection
        constexpr ::std::ptrdiff_t subsurfaceProfile = 0x1B0; // SubsurfaceProfile
        constexpr ::std::ptrdiff_t voiceVolume = 0x1B8; // float
        constexpr ::std::ptrdiff_t skinColor = 0x1BC; // float
        constexpr ::std::ptrdiff_t skinNumber = 0x1C0; // float
        constexpr ::std::ptrdiff_t meshNumber = 0x1C4; // float
        constexpr ::std::ptrdiff_t hairNumber = 0x1C8; // float
        constexpr ::std::ptrdiff_t skinType = 0x1CC; // int
        constexpr ::std::ptrdiff_t movementSounds = 0x1D0; // MovementSounds
        constexpr ::std::ptrdiff_t showSash = 0x1D8; // bool
        constexpr ::std::ptrdiff_t tempPoseType = 0x1DC; // int
        constexpr ::std::ptrdiff_t underwearSkin = 0x1E0; // uint
        constexpr ::std::ptrdiff_t overrideSkinSeed = 0x1E8; // ulong
        constexpr ::std::ptrdiff_t AimAngles = 0x1F0; // Quaternion
        constexpr ::std::ptrdiff_t LookAngles = 0x200; // Quaternion
        constexpr ::std::ptrdiff_t modelState = 0x210; // ModelState
        constexpr ::std::ptrdiff_t position = 0x218; // Vector3
        constexpr ::std::ptrdiff_t velocity = 0x224; // Vector3
        constexpr ::std::ptrdiff_t speedOverride = 0x230; // Vector3
        constexpr ::std::ptrdiff_t newVelocity = 0x23C; // Vector3
        constexpr ::std::ptrdiff_t rotation = 0x248; // Quaternion
        constexpr ::std::ptrdiff_t mountedRotation = 0x258; // Quaternion
        constexpr ::std::ptrdiff_t smoothLeftFootIK = 0x268; // Vector3
        constexpr ::std::ptrdiff_t smoothRightFootIK = 0x274; // Vector3
        constexpr ::std::ptrdiff_t drawShadowOnly = 0x280; // bool
        constexpr ::std::ptrdiff_t isIncapacitated = 0x281; // bool
        constexpr ::std::ptrdiff_t flinchLocation = 0x284; // uint
        constexpr ::std::ptrdiff_t visible = 0x288; // bool
        constexpr ::std::ptrdiff_t nameTag = 0x290; // PlayerNameTag
        constexpr ::std::ptrdiff_t animatorNeedsWarmup = 0x298; // bool
        constexpr ::std::ptrdiff_t isLocalPlayer = 0x299; // bool
        constexpr ::std::ptrdiff_t aimSoundDef = 0x2A0; // SoundDefinition
        constexpr ::std::ptrdiff_t aimEndSoundDef = 0x2A8; // SoundDefinition
        constexpr ::std::ptrdiff_t InGesture = 0x2B0; // bool
        constexpr ::std::ptrdiff_t CurrentGestureConfig = 0x2B8; // GestureConfig
        constexpr ::std::ptrdiff_t InCinematic = 0x2C0; // bool
        constexpr ::std::ptrdiff_t defaultAnimatorController = 0x2C8; // RuntimeAnimatorController
        constexpr ::std::ptrdiff_t _multiMesh = 0x2D0; // SkinnedMultiMesh
        constexpr ::std::ptrdiff_t _animator = 0x2D8; // Animator
        constexpr ::std::ptrdiff_t _lodGroup = 0x2E0; // LODGroup
        constexpr ::std::ptrdiff_t _currentGesture = 0x2E8; // RuntimeAnimatorController
        constexpr ::std::ptrdiff_t holdTypeLock = 0x2F0; // float
        constexpr ::std::ptrdiff_t wasMountedRightAim = 0x2F4; // bool
        constexpr ::std::ptrdiff_t cachedMask = 0x2F8; // int
        constexpr ::std::ptrdiff_t cachedConstructionMask = 0x2FC; // int
        constexpr ::std::ptrdiff_t WorkshopHeldEntity = 0x300; // HeldEntity
        constexpr ::std::ptrdiff_t wasCrawling = 0x308; // bool
        constexpr ::std::ptrdiff_t mountedSpineLookWeight = 0x30C; // float
        constexpr ::std::ptrdiff_t mountedAnimSpeed = 0x310; // float
        constexpr ::std::ptrdiff_t preserveBones = 0x314; // bool
        constexpr ::std::ptrdiff_t IsNpc = 0x320; // bool
        constexpr ::std::ptrdiff_t timeSinceReactionStart = 0x324; // TimeSince
        constexpr ::std::ptrdiff_t timeSinceLeftFootTest = 0x328; // TimeSince
        constexpr ::std::ptrdiff_t cachedLeftFootPos = 0x32C; // Vector3
        constexpr ::std::ptrdiff_t cachedLeftFootNormal = 0x338; // Vector3
        constexpr ::std::ptrdiff_t timeSinceRightFootTest = 0x344; // TimeSince
        constexpr ::std::ptrdiff_t cachedRightFootPos = 0x348; // Vector3
        constexpr ::std::ptrdiff_t cachedRightFootNormal = 0x354; // Vector3
    } // namespace PlayerModel
    namespace ModelState {
        constexpr ::std::ptrdiff_t ShouldPool = 0x10; // bool
        constexpr ::std::ptrdiff_t _disposed = 0x11; // bool
        constexpr ::std::ptrdiff_t waterLevel = 0x14; // float
        constexpr ::std::ptrdiff_t lookDir = 0x18; // Vector3
        constexpr ::std::ptrdiff_t flags = 0x24; // int
        constexpr ::std::ptrdiff_t poseType = 0x28; // int
        constexpr ::std::ptrdiff_t inheritedVelocity = 0x2C; // Vector3
    } // namespace ModelState
    namespace Item {
        constexpr ::std::ptrdiff_t _condition = 0x18; // float
        constexpr ::std::ptrdiff_t _maxCondition = 0x1C; // float
        constexpr ::std::ptrdiff_t info = 0x20; // ItemDefinition
        constexpr ::std::ptrdiff_t uid = 0x28; // uint
        constexpr ::std::ptrdiff_t dirty = 0x2C; // bool
        constexpr ::std::ptrdiff_t amount = 0x30; // int
        constexpr ::std::ptrdiff_t position = 0x34; // int
        constexpr ::std::ptrdiff_t busyTime = 0x38; // float
        constexpr ::std::ptrdiff_t removeTime = 0x3C; // float
        constexpr ::std::ptrdiff_t fuel = 0x40; // float
        constexpr ::std::ptrdiff_t isServer = 0x44; // bool
        constexpr ::std::ptrdiff_t instanceData = 0x48; // Item.InstanceData
        constexpr ::std::ptrdiff_t skin = 0x50; // ulong
        constexpr ::std::ptrdiff_t name = 0x58; // string
        constexpr ::std::ptrdiff_t text = 0x60; // string
        constexpr ::std::ptrdiff_t flags = 0x70; // Item.Flag
        constexpr ::std::ptrdiff_t contents = 0x78; // ItemContainer
        constexpr ::std::ptrdiff_t parent = 0x80; // ItemContainer
        constexpr ::std::ptrdiff_t worldEnt = 0x88; // EntityRef
        constexpr ::std::ptrdiff_t heldEntity = 0x98; // EntityRef
    } // namespace Item
    namespace Model {
        constexpr ::std::ptrdiff_t collision = 0x18; // SphereCollider
        constexpr ::std::ptrdiff_t rootBone = 0x20; // Transform
        constexpr ::std::ptrdiff_t headBone = 0x28; // Transform
        constexpr ::std::ptrdiff_t eyeBone = 0x30; // Transform
        constexpr ::std::ptrdiff_t animator = 0x38; // Animator
        constexpr ::std::ptrdiff_t skeleton = 0x40; // Skeleton
        constexpr ::std::ptrdiff_t boneTransforms = 0x48; // Transform[]
        constexpr ::std::ptrdiff_t boneNames = 0x50; // string[]
        constexpr ::std::ptrdiff_t boneDict = 0x58; // BoneDictionary
        constexpr ::std::ptrdiff_t skin = 0x60; // int
        constexpr ::std::ptrdiff_t _lodGroup = 0x68; // LODGroup
    } // namespace Model
    namespace RecoilProperties {
        constexpr ::std::ptrdiff_t recoilYawMin = 0x18; // float
        constexpr ::std::ptrdiff_t recoilYawMax = 0x1C; // float
        constexpr ::std::ptrdiff_t recoilPitchMin = 0x20; // float
        constexpr ::std::ptrdiff_t recoilPitchMax = 0x24; // float
        constexpr ::std::ptrdiff_t timeToTakeMin = 0x28; // float
        constexpr ::std::ptrdiff_t timeToTakeMax = 0x2C; // float
        constexpr ::std::ptrdiff_t ADSScale = 0x30; // float
        constexpr ::std::ptrdiff_t movementPenalty = 0x34; // float
        constexpr ::std::ptrdiff_t clampPitch = 0x38; // float
        constexpr ::std::ptrdiff_t pitchCurve = 0x40; // AnimationCurve
        constexpr ::std::ptrdiff_t yawCurve = 0x48; // AnimationCurve
        constexpr ::std::ptrdiff_t useCurves = 0x50; // bool
        constexpr ::std::ptrdiff_t curvesAsScalar = 0x51; // bool
        constexpr ::std::ptrdiff_t shotsUntilMax = 0x54; // int
        constexpr ::std::ptrdiff_t maxRecoilRadius = 0x58; // float
        constexpr ::std::ptrdiff_t overrideAimconeWithCurve = 0x5C; // bool
        constexpr ::std::ptrdiff_t aimconeCurveScale = 0x60; // float
        constexpr ::std::ptrdiff_t aimconeCurve = 0x68; // AnimationCurve
        constexpr ::std::ptrdiff_t aimconeProbabilityCurve = 0x70; // AnimationCurve
        constexpr ::std::ptrdiff_t newRecoilOverride = 0x78; // RecoilProperties
    } // namespace RecoilProperties
} // namespace blazedumper
