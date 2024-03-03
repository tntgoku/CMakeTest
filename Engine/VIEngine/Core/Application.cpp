#include"Application.h"
#include<iostream>

namespace VIEngine {
	Application::Application(const ApplicationConfiguration& config) :mConfig(config) {

	}
	void Application::Run() const {
		std::cout << "App is Running " << mConfig.Width << " , " << mConfig.Height << " , " << mConfig.Height << std::endl;
	}

}