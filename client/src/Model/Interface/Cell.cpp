//
// Created by dot_blue on 1/23/19.
//

#include "Cell.h"


Cell::Cell(bool _isNull): isNull(_isNull) {}


Cell::Cell(const Cell & _cell) {
    this->_column = _cell._column;
    this->_row = _cell._row;

    this->_isInVision = _cell._isInVision;
    this->_isWall = _cell._isWall;
    this->_isInMyRespawnZone = _cell._isInMyRespawnZone;
    this->_isInOppRespawnZone = _cell._isInOppRespawnZone;
    this->_isInObjectiveZone = _cell._isInObjectiveZone;

}
//---------------wall------------------
bool &Cell::isWall() {
    return _isWall;
}

bool Cell::isWall() const {
    return _isWall;
}

//----------InMyRespawnZone------------
bool &Cell::isInMyRespawnZone() {
    return _isInMyRespawnZone;
}

bool Cell::isInMyRespawnZone() const {
    return _isInMyRespawnZone;
}

//----------InOppRespawnZone-----------
bool &Cell::isInOppRespawnZone() {
    return _isInOppRespawnZone;
}

bool Cell::isInOppRespawnZone() const {
    return _isInOppRespawnZone;
}

//-----------InObjectiveZone-----------
bool &Cell::isInObjectiveZone() {
    return _isInObjectiveZone;
}

bool Cell::isInObjectiveZone() const {
    return _isInObjectiveZone;
}

//--------------InVision---------------
bool &Cell::isInVision() {
    return _isInVision;
}

bool Cell::isInvision() const {
    return _isInVision;
}
//---------------row-------------------
int &Cell::row() {
    return _row;
}

int Cell::row() const {
    return _row;
}
//--------------column-----------------
int &Cell::column() {
    return _column;
}

int Cell::column() const {
    return _column;
}

bool Cell::inThisPosition(int row, int column) const{
    return this->_row == row && this->_column == column;
}

bool Cell::operator==(const Cell _cell) const{
    return this->inThisPosition(_cell.row(),_cell.column()) &&
            (this->isNull == _cell.isNull);
}

bool Cell::operator!=(const Cell _cell) const {
    return !(*this == _cell);
}

Cell Cell::NULL_CELL(true);



