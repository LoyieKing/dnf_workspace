# notifyGlobalEffectInfo

`_ZNK20CGlobalEffectManager22notifyGlobalEffectInfoEv`

`CGlobalEffectManager::notifyGlobalEffectInfo() const`

| 类 | 地址 |
|---|---|
| `CGlobalEffectManager` | `0x084b7e48` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084b7e48  _ZNK20CGlobalEffectManager22notifyGlobalEffectInfoEv
#           CGlobalEffectManager::notifyGlobalEffectInfo() const
# range [0x084b7e48, 0x084b7ec3]
084b7e48 +0x00:  push   %ebp
084b7e49 +0x01:  mov    %esp,%ebp
084b7e4b +0x03:  push   %esi
084b7e4c +0x04:  push   %ebx
084b7e4d +0x05:  sub    $0x20,%esp
084b7e50 +0x08:  lea    -0x14(%ebp),%eax
084b7e53 +0x0b:  mov    %eax,(%esp)
084b7e56 +0x0e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084b7e5b +0x13:  lea    -0x14(%ebp),%eax
084b7e5e +0x16:  mov    %eax,0x4(%esp)
084b7e62 +0x1a:  mov    0x8(%ebp),%eax
084b7e65 +0x1d:  mov    %eax,(%esp)
084b7e68 +0x20:  call   084b7ec4 <_ZNK20CGlobalEffectManager20makeGlobalEffectInfoER11PacketGuard>  ; CGlobalEffectManager::makeGlobalEffectInfo(PacketGuard&) const
084b7e6d +0x25:  movl   $0x1,0x4(%esp)
084b7e75 +0x2d:  lea    -0x14(%ebp),%eax
084b7e78 +0x30:  mov    %eax,(%esp)
084b7e7b +0x33:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084b7e80 +0x38:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
084b7e85 +0x3d:  lea    -0x14(%ebp),%edx
084b7e88 +0x40:  mov    %edx,0x4(%esp)
084b7e8c +0x44:  mov    %eax,(%esp)
084b7e8f +0x47:  call   086c8c14 <_ZN9GameWorld8send_allER11PacketGuard>  ; GameWorld::send_all(PacketGuard&)
084b7e94 +0x4c:  jmp    084b7eb1 <+0x69>
084b7e96 +0x4e:  mov    %edx,%ebx
084b7e98 +0x50:  mov    %eax,%esi
084b7e9a +0x52:  lea    -0x14(%ebp),%eax
084b7e9d +0x55:  mov    %eax,(%esp)
084b7ea0 +0x58:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084b7ea5 +0x5d:  mov    %esi,%eax
084b7ea7 +0x5f:  mov    %ebx,%edx
084b7ea9 +0x61:  mov    %eax,(%esp)
084b7eac +0x64:  call   08ae3750 <_Unwind_Resume>
084b7eb1 +0x69:  lea    -0x14(%ebp),%eax
084b7eb4 +0x6c:  mov    %eax,(%esp)
084b7eb7 +0x6f:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084b7ebc +0x74:  add    $0x20,%esp
084b7ebf +0x77:  pop    %ebx
084b7ec0 +0x78:  pop    %esi
084b7ec1 +0x79:  pop    %ebp
084b7ec2 +0x7a:  ret
084b7ec3 +0x7b:  nop
```

## 反编译 C

```c
// CGlobalEffectManager::notifyGlobalEffectInfo @ 0x84b7e48

/* CGlobalEffectManager::notifyGlobalEffectInfo() const */

void __thiscall CGlobalEffectManager::notifyGlobalEffectInfo(CGlobalEffectManager *this)

{
  GameWorld *this_00;
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 084b7e68 to 084b7e93 has its CatchHandler @ 084b7e96 */
  makeGlobalEffectInfo(this,local_18);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
  this_00 = (GameWorld *)G_GameWorld();
  GameWorld::send_all(this_00,local_18);
  PacketGuard::~PacketGuard(local_18);
  return;
}
```
