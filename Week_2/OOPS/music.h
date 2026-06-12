#ifndef MUSIC_H
#define MUSIC_H

namespace music
{
	class Playable{
		public:
			virtual void play() = 0;
			virtual ~Playable(){}
	};
}
#endif