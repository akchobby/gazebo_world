#include<gazebo/gazebo.hh>

namespace gazebo
{
	class WorldPluginMyrobot : public WorldPlugin
	{
		public: WorldPluginMyrobot() : WorldPlugin()
		{
			printf("Welcome to my world \n");
		}
		
		public: void Load(physics::WorldPtr _world, sdf::ElementPtr _sdf)
		{
		
		}
	};
	GZ_REGISTER_WORLD_PLUGIN(WorldPluginMyrobot)
}
