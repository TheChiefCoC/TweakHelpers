/* 
---Preference loader and caller
---------Made by At0m0s
---Used like this:

loadPref(prefs, prefsPath);

where "prefs" is a NSMutableDictionary.  Just define it, don't alloc or init.
and where prefsPath is a NSString containing the path to your settings.plist

---GetPrefBool is self-explanatory.
-(void)function:(int)fp8 {
if(GetPrefBool(@"kKey")) {
ret
}
ret
}

where "kKey" is the key name in your pref bundle
---GetPrefInt is used like so:
-(void)function:(int)fp8 {
return %orig(GetPrefInt(@"kKey"));
}
where "kKey" is the key name in your pref bundle

*/

NSMutableDictionary* preferences;

static void loadPrefs(NSMutableDictionary *prefs, NSString *prefsPath) {
	prefs = [[NSMutableDictionary alloc] initWithContentsOfFile: prefsPath];
}

inline bool GetPrefBool(NSString *key) {
	return [[preferences valueForKey:key] boolValue];     
}

inline int GetPrefInt(NSString *key) {
	return [[preferences valueForKey:key] intValue];
}

inline void SetPrefBool(NSString *key, bool value) 
{
	NSNumber *obj = [NSNumber numberWithBool:value];
	[dict setObject:obj forKey:key];
	[dict writeToFile:prefPath atomically:YES];
}

inline void SetPrefInt(NSString *key, int value) 
{
	NSNumber *obj = [NSNumber numberWithInt:value];
	[dict setObject:obj forKey:key];
	[dict writeToFile:prefPath atomically:YES];
}
