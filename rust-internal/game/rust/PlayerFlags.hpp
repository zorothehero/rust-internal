#ifndef RUST_PlayerFlags
#define RUST_PlayerFlags

enum class PlayerFlags : int {
    Unused1 = 1,
    Unused2 = 2,
    IsAdmin = 4,
    ReceivingSnapshot = 8,
    Sleeping = 16,
    Spectating = 32,
    Wounded = 64,
    IsDeveloper = 128,
    Connected = 256,
    ThirdPersonViewmode = 1024,
    EyesViewmode = 2048,
    ChatMute = 4096,
    NoSprint = 8192,
    Aiming = 16384,
    DisplaySash = 32768,
    Relaxed = 65536,
    SafeZone = 131072,
    ServerFall = 262144,
    Workbench1 = 1048576,
    Workbench2 = 2097152,
    Workbench3 = 4194304,
};
PlayerFlags operator &(PlayerFlags lhs, PlayerFlags rhs) {
    return static_cast<PlayerFlags> (
        static_cast<std::underlying_type<PlayerFlags>::type>(lhs) &
        static_cast<std::underlying_type<PlayerFlags>::type>(rhs)
        );
}
PlayerFlags operator ^(PlayerFlags lhs, PlayerFlags rhs) {
    return static_cast<PlayerFlags> (
        static_cast<std::underlying_type<PlayerFlags>::type>(lhs) ^
        static_cast<std::underlying_type<PlayerFlags>::type>(rhs)
        );
}
PlayerFlags operator ~(PlayerFlags rhs) {
    return static_cast<PlayerFlags> (
        ~static_cast<std::underlying_type<PlayerFlags>::type>(rhs)
        );
}
PlayerFlags& operator |=(PlayerFlags& lhs, PlayerFlags rhs) {
    lhs = static_cast<PlayerFlags> (
        static_cast<std::underlying_type<PlayerFlags>::type>(lhs) |
        static_cast<std::underlying_type<PlayerFlags>::type>(rhs)
        );

    return lhs;
}
PlayerFlags& operator &=(PlayerFlags& lhs, PlayerFlags rhs) {
    lhs = static_cast<PlayerFlags> (
        static_cast<std::underlying_type<PlayerFlags>::type>(lhs) &
        static_cast<std::underlying_type<PlayerFlags>::type>(rhs)
        );

    return lhs;
}

#endif
