#include "audio.h"
#include <iostream>

using namespace std;

audio::audio()
{

    button->setMedia(QUrl("qrc:/audio/button.mp3"));

    menu->setVolume(music_volume);
    menu->setMedia(QUrl("qrc:/audio/terry_menu.mp3"));

    background->setMedia(QUrl("qrc:/audio/terry_menu.mp3"));

    cut->setVolume(sound_volume);
    cut->setMedia(QUrl("qrc:/audio/swoosh.mp3"));

    fly->setVolume(sound_volume);
    fly->setMedia(QUrl("qrc:/audio/crunch.mp3"));

    tram_poline->setVolume(sound_volume);
    tram_poline->setMedia(QUrl("qrc:/audio/bouncy.mp3"));

    portal_->setVolume(sound_volume);
    portal_->setMedia(QUrl("qrc:/audio/portal.mp3"));

    winning->setVolume(sound_volume);
    winning->setMedia(QUrl("qrc:/audio/win.mp3"));

    game_over->setVolume(sound_volume);
    game_over->setMedia(QUrl("qrc:/audio/gameover.mp3"));

}

//------------------------------------------

void audio::SetMusicVolume(int volume) {
  music_volume = volume;
  reVolumeMusic();
}

//------------------------------------------

void audio::SetSoundVolume(int volume) {
  sound_volume = volume;
  reVolumeSound();
}

//------------------------------------------

void audio::reVolumeMusic() {
  menu->setVolume(music_volume);
}

//------------------------------------------

void audio::reVolumeSound() {
  cut->setVolume(sound_volume);
  fly->setVolume(sound_volume);
  tram_poline->setVolume(sound_volume);
}

//------------------------------------------

void audio::setMusicVal(const int& val1){
   music_value = val1;
}

//------------------------------------------

int audio::getMusicVal() const{
    return music_value;
}

//------------------------------------------

int audio::music_value = 100;

//------------------------------------------

void audio::setSoundVal(const int& val2){
   sound_value = val2;
}

//------------------------------------------

int audio::getSoundVal() const{
    return sound_value;
}

//------------------------------------------

int audio::sound_value = 100;
