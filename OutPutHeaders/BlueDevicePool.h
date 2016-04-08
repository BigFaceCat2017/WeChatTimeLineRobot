/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSRecursiveLock, NSMutableArray;

@interface BlueDevicePool : XXUnknownSuperclass {
	NSMutableArray* _devicePool;
	NSRecursiveLock* m_oLock;
}
@property(retain) NSMutableArray* devicePool;
-(void).cxx_destruct;
-(void)removeAllObjectsWithDelegate:(id)delegate;
-(void)removeDisconnected;
-(void)removeDevice:(id)device;
-(id)getDeviceByOutputStream:(id)stream;
-(id)getDeviceByInputStream:(id)stream;
-(id)getDeviceByPeripheral:(id)peripheral;
-(id)getDeviceBySessionID:(long long)anId;
-(id)getDeviceByDID:(long long)did;
-(id)getDeviceByAccessory:(id)accessory;
-(id)addDeviceWithPeripheral:(id)peripheral WithUUID:(id)uuid;
-(id)addDeviceWithPeripheral:(id)peripheral WithMacData:(id)macData;
-(id)addDeviceWithPeripheral:(id)peripheral WithDID:(long long)did;
-(id)addDeviceWithAccessory:(id)accessory;
-(void)dealloc;
-(id)initWithLock:(id)lock;
@end
