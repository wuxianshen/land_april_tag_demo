namespace landing_vision_defs
{
#pragma push(1)
	typedef struct _land_mark_pos
	{
		int mark_id;
		int hammingDistance;
		double distance;
		double x;
		double y;
		double z;
		double yaw;
		double pitch;
		double roll;

	}land_mark_pos;
#pragma pop()
};
