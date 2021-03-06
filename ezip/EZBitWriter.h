//
//  EZip, Awesome File Compression
//  Copyright (c) 2014 Jack Maloney. All rights reserved.
//
//  This program is free software: you can redistribute it and/or modify
//  it under the terms of the GNU General Public License as published by
//  the Free Software Foundation, either version 3 of the License, or
//  (at your option) any later version.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with this program.  If not, see <http://www.gnu.org/licenses/>.
//

#import <Foundation/Foundation.h>
#import "ez.h"
#import "EZTree.h"

@interface EZBitWriter : NSObject

-(instancetype) initWithFile:(NSString*) path;

@property (nonatomic, readonly) FILE* file;
@property (nonatomic, readonly) int position;
@property (nonatomic, readonly, strong) NSString* current;

-(void) CompressAndWriteCharacter:(char) character WithCoding:(EZCodeMap*) codes;
-(void) flush;
-(void) WriteHeader:(EZTree*) tree sha:(NSString*) sha;

@end
