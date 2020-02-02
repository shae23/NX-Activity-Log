#ifndef SCREEN_DETAILS_HPP
#define SCREEN_DETAILS_HPP

#include "Application.hpp"

// Forward declaration due to circular dependency
namespace Main {
    class Application;
};

namespace Screen {
    class Details : public Aether::Screen {
        private:
            // Pointer to app for theme
            Main::Application * app;

            // Pointers to elements
            Aether::Image * icon;
            Aether::List * list;
            Aether::Text * title;
            Aether::Image * userimage;
            Aether::Text * username;

            // Summary items (to edit value directly)
            Aether::ListOption * loPlayTime;
            Aether::ListOption * loAverageTime;
            Aether::ListOption * loLaunched;
            Aether::ListOption * loFirstTime;
            Aether::ListOption * loLastTime;

        public:
            // Sets up elements
            Details(Main::Application *);

            // Create user + title reliant elements
            void onLoad();
            // Free elements created in onLoad()
            void onUnload();
    };
};

#endif