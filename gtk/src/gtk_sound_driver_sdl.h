#ifndef __GTK_SOUND_DRIVER_SDL_H
#define __GTK_SOUND_DRIVER_SDL_H

#include "SDL.h"

#include "gtk_sound.h"
#include "gtk_sound_driver.h"

class S9xSDLSoundDriver : public S9xSoundDriver
{
    public:
        S9xSDLSoundDriver ();
        void init ();
        void terminate ();
        bool8 open_device ();
        void start ();
        void stop ();
        void mix (unsigned char *output, int bytes);

    private:
        SDL_AudioSpec *audiospec;
};


#endif /* __GTK_SOUND_DRIVER_SDL_H */
