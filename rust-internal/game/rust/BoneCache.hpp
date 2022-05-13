#ifndef RUST_BoneCache
#define RUST_BoneCache

class BoneCache {
public:
    Bone* head;
    Bone* neck;
    Bone* spine4;
    Bone* spine1;
    Bone* l_upperarm;
    Bone* l_forearm;
    Bone* l_hand;
    Bone* r_upperarm;
    Bone* r_forearm;
    Bone* r_hand;
    Bone* pelvis;
    Bone* l_hip;
    Bone* l_knee;
    Bone* l_foot;
    Bone* r_hip;
    Bone* r_knee;
    Bone* r_foot;
    Bone* r_toe;
    Bone* l_toe;

    box_bounds bounds;
    Vector2 dfc;
    Vector2 forward;
    Quaternion eye_rot;

    BoneCache( ) {
        head = new Bone( );
        neck = new Bone( );
        spine4 = new Bone( );
        spine1 = new Bone( );
        l_upperarm = new Bone( );
        l_forearm = new Bone( );
        l_hand = new Bone( );
        r_upperarm = new Bone( );
        r_forearm = new Bone( );
        r_hand = new Bone( );
        pelvis = new Bone( );
        l_hip = new Bone( );
        l_knee = new Bone( );
        l_foot = new Bone( );
        r_hip = new Bone( );
        r_knee = new Bone( );
        r_foot = new Bone( );

        bounds = { 0, 0, 0, 0 };
        dfc = Vector2( );
        forward = { };
        eye_rot = { };
    }
};
#endif
