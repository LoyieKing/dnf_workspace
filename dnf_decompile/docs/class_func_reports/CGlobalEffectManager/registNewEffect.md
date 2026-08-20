# registNewEffect

`_ZN20CGlobalEffectManager15registNewEffectEjfPKcll`

`CGlobalEffectManager::registNewEffect(unsigned int, float, char const*, long, long)`

| 类 | 地址 |
|---|---|
| `CGlobalEffectManager` | `0x084b7932` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084b7932  _ZN20CGlobalEffectManager15registNewEffectEjfPKcll
#           CGlobalEffectManager::registNewEffect(unsigned int, float, char const*, long, long)
# range [0x084b7932, 0x084b7a93]
084b7932 +0x000:  push   %ebp
084b7933 +0x001:  mov    %esp,%ebp
084b7935 +0x003:  push   %esi
084b7936 +0x004:  push   %ebx
084b7937 +0x005:  add    $0xffffff80,%esp
084b793a +0x008:  mov    0xc(%ebp),%eax
084b793d +0x00b:  mov    %eax,0x4(%esp)
084b7941 +0x00f:  mov    0x8(%ebp),%eax
084b7944 +0x012:  mov    %eax,(%esp)
084b7947 +0x015:  call   084b7d2c <_ZNK20CGlobalEffectManager16isAffectedEffectEj>  ; CGlobalEffectManager::isAffectedEffect(unsigned int) const
084b794c +0x01a:  test   %al,%al
084b794e +0x01c:  jne    084b7a8c <+0x15a>
084b7954 +0x022:  cmpl   $0x0,0x18(%ebp)
084b7958 +0x026:  jne    084b79ed <+0xbb>
084b795e +0x02c:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
084b7965 +0x033:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
084b796a +0x038:  add    0x1c(%ebp),%eax
084b796d +0x03b:  mov    %eax,0x10(%esp)
084b7971 +0x03f:  mov    0x14(%ebp),%eax
084b7974 +0x042:  mov    %eax,0xc(%esp)
084b7978 +0x046:  mov    0x10(%ebp),%eax
084b797b +0x049:  mov    %eax,0x8(%esp)
084b797f +0x04d:  mov    0xc(%ebp),%eax
084b7982 +0x050:  mov    %eax,0x4(%esp)
084b7986 +0x054:  lea    -0x60(%ebp),%eax
084b7989 +0x057:  mov    %eax,(%esp)
084b798c +0x05a:  call   084b800a <_GLOBAL__I__ZNK13CGlobalEffect14makeNotifyInfoER11PacketGuard+0x4d>  ; global constructors keyed to CGlobalEffect::makeNotifyInfo(PacketGuard&) const+0x4d
084b7991 +0x05f:  mov    0x8(%ebp),%eax
084b7994 +0x062:  lea    -0x60(%ebp),%edx
084b7997 +0x065:  mov    %edx,0x4(%esp)
084b799b +0x069:  mov    %eax,(%esp)
084b799e +0x06c:  call   084b806e <_GLOBAL__I__ZNK13CGlobalEffect14makeNotifyInfoER11PacketGuard+0xb1>  ; global constructors keyed to CGlobalEffect::makeNotifyInfo(PacketGuard&) const+0xb1
084b79a3 +0x071:  jmp    084b79c0 <+0x8e>
084b79a5 +0x073:  mov    %edx,%ebx
084b79a7 +0x075:  mov    %eax,%esi
084b79a9 +0x077:  lea    -0x60(%ebp),%eax
084b79ac +0x07a:  mov    %eax,(%esp)
084b79af +0x07d:  call   082a7214 <_GLOBAL__I__ZN4CLog5this_E+0x363b>  ; global constructors keyed to CLog::this_+0x363b
084b79b4 +0x082:  mov    %esi,%eax
084b79b6 +0x084:  mov    %ebx,%edx
084b79b8 +0x086:  mov    %eax,(%esp)
084b79bb +0x089:  call   08ae3750 <_Unwind_Resume>
084b79c0 +0x08e:  lea    -0x60(%ebp),%eax
084b79c3 +0x091:  mov    %eax,(%esp)
084b79c6 +0x094:  call   082a7214 <_GLOBAL__I__ZN4CLog5this_E+0x363b>  ; global constructors keyed to CLog::this_+0x363b
084b79cb +0x099:  mov    0x8(%ebp),%eax
084b79ce +0x09c:  mov    %eax,(%esp)
084b79d1 +0x09f:  call   084b7e48 <_ZNK20CGlobalEffectManager22notifyGlobalEffectInfoEv>  ; CGlobalEffectManager::notifyGlobalEffectInfo() const
084b79d6 +0x0a4:  mov    0x1c(%ebp),%eax
084b79d9 +0x0a7:  mov    %eax,0x4(%esp)
084b79dd +0x0ab:  mov    0xc(%ebp),%eax
084b79e0 +0x0ae:  mov    %eax,(%esp)
084b79e3 +0x0b1:  call   08637ef6 <_ZN28TimerGlobalEffectItemTimeout11registTimerEjj>  ; TimerGlobalEffectItemTimeout::registTimer(unsigned int, unsigned int)
084b79e8 +0x0b6:  jmp    084b7a8d <+0x15b>
084b79ed +0x0bb:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
084b79f4 +0x0c2:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
084b79f9 +0x0c7:  add    0x18(%ebp),%eax
084b79fc +0x0ca:  add    0x1c(%ebp),%eax
084b79ff +0x0cd:  mov    %eax,0x10(%esp)
084b7a03 +0x0d1:  mov    0x14(%ebp),%eax
084b7a06 +0x0d4:  mov    %eax,0xc(%esp)
084b7a0a +0x0d8:  mov    0x10(%ebp),%eax
084b7a0d +0x0db:  mov    %eax,0x8(%esp)
084b7a11 +0x0df:  mov    0xc(%ebp),%eax
084b7a14 +0x0e2:  mov    %eax,0x4(%esp)
084b7a18 +0x0e6:  lea    -0x34(%ebp),%eax
084b7a1b +0x0e9:  mov    %eax,(%esp)
084b7a1e +0x0ec:  call   084b800a <_GLOBAL__I__ZNK13CGlobalEffect14makeNotifyInfoER11PacketGuard+0x4d>  ; global constructors keyed to CGlobalEffect::makeNotifyInfo(PacketGuard&) const+0x4d
084b7a23 +0x0f1:  mov    0x8(%ebp),%eax
084b7a26 +0x0f4:  lea    0xc(%eax),%edx
084b7a29 +0x0f7:  lea    -0x34(%ebp),%eax
084b7a2c +0x0fa:  mov    %eax,0x4(%esp)
084b7a30 +0x0fe:  mov    %edx,(%esp)
084b7a33 +0x101:  call   084b806e <_GLOBAL__I__ZNK13CGlobalEffect14makeNotifyInfoER11PacketGuard+0xb1>  ; global constructors keyed to CGlobalEffect::makeNotifyInfo(PacketGuard&) const+0xb1
084b7a38 +0x106:  jmp    084b7a55 <+0x123>
084b7a3a +0x108:  mov    %edx,%ebx
084b7a3c +0x10a:  mov    %eax,%esi
084b7a3e +0x10c:  lea    -0x34(%ebp),%eax
084b7a41 +0x10f:  mov    %eax,(%esp)
084b7a44 +0x112:  call   082a7214 <_GLOBAL__I__ZN4CLog5this_E+0x363b>  ; global constructors keyed to CLog::this_+0x363b
084b7a49 +0x117:  mov    %esi,%eax
084b7a4b +0x119:  mov    %ebx,%edx
084b7a4d +0x11b:  mov    %eax,(%esp)
084b7a50 +0x11e:  call   08ae3750 <_Unwind_Resume>
084b7a55 +0x123:  lea    -0x34(%ebp),%eax
084b7a58 +0x126:  mov    %eax,(%esp)
084b7a5b +0x129:  call   082a7214 <_GLOBAL__I__ZN4CLog5this_E+0x363b>  ; global constructors keyed to CLog::this_+0x363b
084b7a60 +0x12e:  mov    0x18(%ebp),%eax
084b7a63 +0x131:  mov    %eax,0x4(%esp)
084b7a67 +0x135:  mov    0xc(%ebp),%eax
084b7a6a +0x138:  mov    %eax,(%esp)
084b7a6d +0x13b:  call   08637e78 <_ZN26TimerGlobalEffectItemBegin11registTimerEjj>  ; TimerGlobalEffectItemBegin::registTimer(unsigned int, unsigned int)
084b7a72 +0x140:  mov    0x1c(%ebp),%eax
084b7a75 +0x143:  mov    0x18(%ebp),%edx
084b7a78 +0x146:  lea    (%edx,%eax,1),%eax
084b7a7b +0x149:  mov    %eax,0x4(%esp)
084b7a7f +0x14d:  mov    0xc(%ebp),%eax
084b7a82 +0x150:  mov    %eax,(%esp)
084b7a85 +0x153:  call   08637ef6 <_ZN28TimerGlobalEffectItemTimeout11registTimerEjj>  ; TimerGlobalEffectItemTimeout::registTimer(unsigned int, unsigned int)
084b7a8a +0x158:  jmp    084b7a8d <+0x15b>
084b7a8c +0x15a:  nop
084b7a8d +0x15b:  sub    $0xffffff80,%esp
084b7a90 +0x15e:  pop    %ebx
084b7a91 +0x15f:  pop    %esi
084b7a92 +0x160:  pop    %ebp
084b7a93 +0x161:  ret
```

## 反编译 C

```c
// CGlobalEffectManager::registNewEffect @ 0x84b7932

/* CGlobalEffectManager::registNewEffect(unsigned int, float, char const*, long, long) */

void __thiscall
CGlobalEffectManager::registNewEffect
          (CGlobalEffectManager *this,uint param_1,float param_2,char *param_3,long param_4,
          long param_5)

{
  char cVar1;
  int iVar2;
  CGlobalEffect local_64 [44];
  CGlobalEffect local_38 [44];
  
  cVar1 = isAffectedEffect(this,param_1);
  if (cVar1 == '\0') {
    if (param_4 == 0) {
      iVar2 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
      CGlobalEffect::CGlobalEffect(local_64,param_1,param_2,param_3,iVar2 + param_5);
                    /* try { // try from 084b799e to 084b79a2 has its CatchHandler @ 084b79a5 */
      std::vector<CGlobalEffect,std::allocator<CGlobalEffect>>::push_back
                ((vector<CGlobalEffect,std::allocator<CGlobalEffect>> *)this,local_64);
      CGlobalEffect::~CGlobalEffect(local_64);
      notifyGlobalEffectInfo(this);
      TimerGlobalEffectItemTimeout::registTimer(param_1,param_5);
    }
    else {
      iVar2 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
      CGlobalEffect::CGlobalEffect(local_38,param_1,param_2,param_3,iVar2 + param_4 + param_5);
                    /* try { // try from 084b7a33 to 084b7a37 has its CatchHandler @ 084b7a3a */
      std::vector<CGlobalEffect,std::allocator<CGlobalEffect>>::push_back
                ((vector<CGlobalEffect,std::allocator<CGlobalEffect>> *)(this + 0xc),local_38);
      CGlobalEffect::~CGlobalEffect(local_38);
      TimerGlobalEffectItemBegin::registTimer(param_1,param_4);
      TimerGlobalEffectItemTimeout::registTimer(param_1,param_4 + param_5);
    }
  }
  return;
}
```
