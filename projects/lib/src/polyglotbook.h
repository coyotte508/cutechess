#ifndef POLYGLOT_BOOK_H
#define POLYGLOT_BOOK_H

#include "openingbook.h"

/*!
 * \brief Opening book which uses the Polyglot book format.
 *
 * The Polyglot opening book format is used by chess engines like
 * Fruit, Toga, and Glaurung, and of course the UCI to Xboard adapter
 * Polyglot.
 *
 * Specs: http://alpha.uhasselt.be/Research/Algebra/Toga/book_format.html
 */
class LIB_EXPORT PolyglotBook: public OpeningBook
{
	protected:
		// Inherited from OpeningBook
		virtual void readEntry(QDataStream& in);
		virtual void writeEntry(const Map::const_iterator& it,
					QDataStream& out) const;
};

#endif // POLYGLOT_BOOK_H
