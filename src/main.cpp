#include <Geode/Geode.hpp>
#include <Geode/modify/MenuLayer.hpp>

using namespace geode::prelude;

class $modify(ArasMenuLayer, MenuLayer) {
    bool init() {
        if (!MenuLayer::init())
            return false;

        log::info("Aras Mod Menu loaded!");
        return true;
    }
};
