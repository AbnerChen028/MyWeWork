//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "WCDBCoding-Protocol.h"

@class NSString;

@interface WCDBMaster : NSObject <WCDBCoding>
{
    unsigned long long _type;
    unsigned int rootpage;
    NSString *type;
    NSString *name;
    NSString *tbl_name;
    NSString *sql;
    long long m___rowID;
}

+ (const vector_24c76cbd *)allProperties;
+ (id)indexSQLTemplate:(id)arg1 tableName:(id)arg2;
+ (id)indexSQLRegularExpression;
+ (id)tableSQLTemplate:(id)arg1;
+ (id)tableSQLRegularExpression;
+ (id)viewType;
+ (id)triggerType;
+ (id)indexType;
+ (id)tableType;
+ (id)tableName;
+ (const map_24f1cf24 *)getFileValueTagIndexMap;
+ (id)getFileValueTypeTable;
+ (const map_24f1cf24 *)getPackedValueTagIndexMap;
+ (id)getPackedValueTypeTable;
+ (const map_64c9abee *)getValueNameIndexMap;
+ (id)getValueTable;
+ (id)dummyObject;
@property(nonatomic) long long __rowID; // @synthesize __rowID=m___rowID;
@property(retain, nonatomic) NSString *sql; // @synthesize sql;
@property(nonatomic) unsigned int rootpage; // @synthesize rootpage;
@property(retain, nonatomic) NSString *tbl_name; // @synthesize tbl_name;
@property(retain, nonatomic) NSString *name; // @synthesize name;
@property(retain, nonatomic) NSString *type; // @synthesize type;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)renameIndex:(id)arg1 tableName:(id)arg2;
- (void)renameTable:(id)arg1;
- (unsigned long long)masterType;
- (const map_24f1cf24 *)getValueTagIndexMap;
- (id)getValueTypeTable;
- (const WCDBCondition_22fabacd *)db_sql;
- (const WCDBCondition_c6db074e *)db_rootpage;
- (const WCDBCondition_22fabacd *)db_tbl_name;
- (const WCDBCondition_22fabacd *)db_name;
- (const WCDBCondition_22fabacd *)db_type;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

