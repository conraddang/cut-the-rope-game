#ifndef AUDIO_H
#define AUDIO_H

#include <QMediaPlayer>
#include <QMediaPlaylist>
#include <QSettings>

//! \brief This class defines the audio functions
class audio
{
public:
    //! \brief Constructor
    audio();

    //! \brief Pointer to background Mediaplayer
    QMediaPlayer *background = new QMediaPlayer();

    //! \brief Pointer to button Mediaplayer
    QMediaPlayer *button = new QMediaPlayer();

    //! \brief Pointer to menu Mediaplayer
    QMediaPlayer *menu = new QMediaPlayer();

    //! \brief Pointer to cut Mediaplayer
    QMediaPlayer *cut = new QMediaPlayer();

    //! \brief Pointer to fly Mediaplayer
    QMediaPlayer *fly = new QMediaPlayer();

    //! \brief Pointer to trampoline Mediaplayer
    QMediaPlayer *tram_poline = new QMediaPlayer();

    //! \brief Pointer to portal Mediaplayer
    QMediaPlayer *portal_ = new QMediaPlayer();

    //! \brief Pointer to winning Mediaplayer
    QMediaPlayer *winning = new QMediaPlayer();

    //! \brief Pointer to gameover MediaPlayer
    QMediaPlayer *game_over = new QMediaPlayer();

    //! \brief Manipulate volume of the music
    void reVolumeMusic();

    //! \brief Return volume from parents class
    void reVolumeSound();

    //! \brief Set music volume in parents class
    void SetMusicVolume(int volume);

    //! \brief Set sound volume in parents class
    void SetSoundVolume(int volume);

    //! \brief Get position of music slider and use it to set volume
    void setMusicVal(const int& val1);

    //! \brief Return volume of music in order to be used in different classes
    int getMusicVal() const;

    //! \brief Get position of sound slider and use it to set Volume
    void setSoundVal(const int& val2);

    //! \brief Return Volume of sound in order to be used in different classes
    int getSoundVal() const;


protected:
    //! \brief Default music volume
    int music_volume = 100;

    //! \brief Default music volume
    int sound_volume = 100;


private:
    //! \brief Default music volume for slider
    static int music_value;

    //! \brief Default sound volume for slider
    static int sound_value;
};

#endif // AUDIO_H
