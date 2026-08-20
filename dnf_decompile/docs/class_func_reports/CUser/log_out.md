# log_out

`_ZN5CUser7log_outEv`

`CUser::log_out()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08658910` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08658910  _ZN5CUser7log_outEv
#           CUser::log_out()
# range [0x08658910, 0x08658a3d]
08658910 +0x000:  push   %ebp
08658911 +0x001:  mov    %esp,%ebp
08658913 +0x003:  push   %ebx
08658914 +0x004:  sub    $0x14,%esp
08658917 +0x007:  mov    0x8(%ebp),%eax
0865891a +0x00a:  movl   $0x0,0x8d10c(%eax)
08658924 +0x014:  mov    0x8(%ebp),%eax
08658927 +0x017:  mov    %eax,(%esp)
0865892a +0x01a:  call   08697288 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x3add>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x3add
0865892f +0x01f:  movl   $0x0,0x4(%esp)
08658937 +0x027:  mov    0x8(%ebp),%eax
0865893a +0x02a:  mov    %eax,(%esp)
0865893d +0x02d:  call   080fdf44 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x270>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x270
08658942 +0x032:  mov    0x8(%ebp),%eax
08658945 +0x035:  mov    %eax,(%esp)
08658948 +0x038:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
0865894d +0x03d:  mov    %eax,%ebx
0865894f +0x03f:  mov    0x8(%ebp),%eax
08658952 +0x042:  mov    %eax,(%esp)
08658955 +0x045:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
0865895a +0x04a:  mov    &_ZN10GlobalData14s_pGMAccounts_E,%edx
08658960 +0x050:  mov    %ebx,0x8(%esp)
08658964 +0x054:  mov    %eax,0x4(%esp)
08658968 +0x058:  mov    %edx,(%esp)
0865896b +0x05b:  call   081093fc <_ZN8WongWork11CGMAccounts8removeGMEjj>  ; WongWork::CGMAccounts::removeGM(unsigned int, unsigned int)
08658970 +0x060:  mov    0x8(%ebp),%eax
08658973 +0x063:  movl   $0x0,0x796f8(%eax)
0865897d +0x06d:  mov    0x8(%ebp),%eax
08658980 +0x070:  movl   $0x0,0x8cfc4(%eax)
0865898a +0x07a:  mov    0x8(%ebp),%eax
0865898d +0x07d:  movl   $0x0,0x704ac(%eax)
08658997 +0x087:  mov    0x8(%ebp),%eax
0865899a +0x08a:  movzwl 0x704a8(%eax),%eax
086589a1 +0x091:  movzwl %ax,%ebx
086589a4 +0x094:  call   086ad85f <_Z29CUserGlobalInfoHandleInstancev>  ; CUserGlobalInfoHandleInstance()
086589a9 +0x099:  mov    %ebx,0x4(%esp)
086589ad +0x09d:  mov    %eax,(%esp)
086589b0 +0x0a0:  call   086ad95e <_ZN21CUserGlobalInfoHandle19reset_uniqueid_flagEt>  ; CUserGlobalInfoHandle::reset_uniqueid_flag(unsigned short)
086589b5 +0x0a5:  mov    0x8(%ebp),%eax
086589b8 +0x0a8:  movw   $0x0,0x704a8(%eax)
086589c1 +0x0b1:  movl   $0x0,0x4(%esp)
086589c9 +0x0b9:  mov    0x8(%ebp),%eax
086589cc +0x0bc:  mov    %eax,(%esp)
086589cf +0x0bf:  call   082a681e <_GLOBAL__I__ZN4CLog5this_E+0x2c45>  ; global constructors keyed to CLog::this_+0x2c45
086589d4 +0x0c4:  movl   $0x0,0x4(%esp)
086589dc +0x0cc:  mov    0x8(%ebp),%eax
086589df +0x0cf:  mov    %eax,(%esp)
086589e2 +0x0d2:  call   082a684c <_GLOBAL__I__ZN4CLog5this_E+0x2c73>  ; global constructors keyed to CLog::this_+0x2c73
086589e7 +0x0d7:  mov    0x8(%ebp),%eax
086589ea +0x0da:  add    $0x704b0,%eax
086589ef +0x0df:  movl   $0x15,0x8(%esp)
086589f7 +0x0e7:  movl   $0x0,0x4(%esp)
086589ff +0x0ef:  mov    %eax,(%esp)
08658a02 +0x0f2:  call   0807dcc0 <_init+0x5b8>
08658a07 +0x0f7:  mov    0x8(%ebp),%eax
08658a0a +0x0fa:  movw   $0x0,0x8cfc8(%eax)
08658a13 +0x103:  mov    0x8(%ebp),%eax
08658a16 +0x106:  movb   $0x0,0x8cfdc(%eax)
08658a1d +0x10d:  mov    0x8(%ebp),%eax
08658a20 +0x110:  add    $0xe0,%eax
08658a25 +0x115:  mov    %eax,(%esp)
08658a28 +0x118:  call   0869ae30 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x7685>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x7685
08658a2d +0x11d:  mov    0x8(%ebp),%eax
08658a30 +0x120:  mov    %eax,(%esp)
08658a33 +0x123:  call   08658030 <_ZN5CUser5resetEv>  ; CUser::reset()
08658a38 +0x128:  add    $0x14,%esp
08658a3b +0x12b:  pop    %ebx
08658a3c +0x12c:  pop    %ebp
08658a3d +0x12d:  ret
```

## 反编译 C

```c
// CUser::log_out @ 0x8658910

/* CUser::log_out() */

void __thiscall CUser::log_out(CUser *this)

{
  ushort uVar1;
  uint uVar2;
  CUserGlobalInfoHandle *this_00;
  
  *(undefined4 *)(this + 0x8d10c) = 0;
  resetPlayExpAdd(this);
  set_multiboxLotteryItemFailCnt(this,0);
  get_acc_id(this);
  uVar2 = get_acc_id(this);
  WongWork::CGMAccounts::removeGM(GlobalData::s_pGMAccounts_,uVar2);
  *(undefined4 *)(this + 0x796f8) = 0;
  *(undefined4 *)(this + 0x8cfc4) = 0;
  *(undefined4 *)(this + 0x704ac) = 0;
  uVar1 = *(ushort *)(this + 0x704a8);
  this_00 = (CUserGlobalInfoHandle *)CUserGlobalInfoHandleInstance();
  CUserGlobalInfoHandle::reset_uniqueid_flag(this_00,uVar1);
  *(undefined2 *)(this + 0x704a8) = 0;
  SetSlotIDX(this,0);
  SetIncreID(this,0);
  memset(this + 0x704b0,0,0x15);
  *(undefined2 *)(this + 0x8cfc8) = 0;
  this[0x8cfdc] = (CUser)0x0;
  CNetwork<4096,450000>::disconnect((CNetwork<4096,450000> *)(this + 0xe0));
  reset(this);
  return;
}
```
