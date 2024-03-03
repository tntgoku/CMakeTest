#include<VIEngine/Core/Entry.h>
#include<iostream>

class Game : public VIEngine::Application{
public:
	Game(const VIEngine::ApplicationConfiguration& config): VIEngine::Application(config) {

	}

	virtual bool Init() override {
		std::cout << "Game is Init\n";
		return true;
	}

	virtual void Shutdown() override {
		std::cout << "Game is Shutdown\n";
	}
};

VIEngine::Application* VIEngine::CreateApplication() {
	VIEngine:: ApplicationConfiguration appConfig;
	appConfig.Width = 800;
	appConfig.Height = 700;
	appConfig.Title = "Test nhe";

	return new Game(appConfig);
}