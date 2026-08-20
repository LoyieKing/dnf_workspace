# check_error

`_ZN24DisPatcher_SelectDungeon11check_errorEP5CUserR8MSG_BASER9ParamBase`

`DisPatcher_SelectDungeon::check_error(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_SelectDungeon` | `0x081c7f32` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081c7f32  _ZN24DisPatcher_SelectDungeon11check_errorEP5CUserR8MSG_BASER9ParamBase
#           DisPatcher_SelectDungeon::check_error(CUser*, MSG_BASE&, ParamBase&)
# range [0x081c7f32, 0x081c8101]
081c7f32 +0x000:  push   %ebp
081c7f33 +0x001:  mov    %esp,%ebp
081c7f35 +0x003:  sub    $0x28,%esp
081c7f38 +0x006:  mov    0xc(%ebp),%eax
081c7f3b +0x009:  mov    %eax,(%esp)
081c7f3e +0x00c:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081c7f43 +0x011:  cmp    $0x5,%eax
081c7f46 +0x014:  je     081c7f5f <+0x2d>
081c7f48 +0x016:  mov    0xc(%ebp),%eax
081c7f4b +0x019:  mov    %eax,(%esp)
081c7f4e +0x01c:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081c7f53 +0x021:  cmp    $0xd,%eax
081c7f56 +0x024:  je     081c7f5f <+0x2d>
081c7f58 +0x026:  mov    $0x1,%eax
081c7f5d +0x02b:  jmp    081c7f64 <+0x32>
081c7f5f +0x02d:  mov    $0x0,%eax
081c7f64 +0x032:  test   %al,%al
081c7f66 +0x034:  je     081c7f72 <+0x40>
081c7f68 +0x036:  mov    $0x7fffffff,%eax
081c7f6d +0x03b:  jmp    081c8100 <+0x1ce>
081c7f72 +0x040:  mov    0xc(%ebp),%eax
081c7f75 +0x043:  mov    %eax,(%esp)
081c7f78 +0x046:  call   0864781e <_ZN15CUserCharacInfo19IsBusyDisjointStoreEv>  ; CUserCharacInfo::IsBusyDisjointStore()
081c7f7d +0x04b:  test   %al,%al
081c7f7f +0x04d:  je     081c7f8b <+0x59>
081c7f81 +0x04f:  mov    $0x7fffffff,%eax
081c7f86 +0x054:  jmp    081c8100 <+0x1ce>
081c7f8b +0x059:  mov    0x10(%ebp),%eax
081c7f8e +0x05c:  mov    %eax,-0x14(%ebp)
081c7f91 +0x05f:  mov    -0x14(%ebp),%eax
081c7f94 +0x062:  movzbl 0x10(%eax),%eax
081c7f98 +0x066:  test   %al,%al
081c7f9a +0x068:  js     081c7fb2 <+0x80>
081c7f9c +0x06a:  mov    -0x14(%ebp),%eax
081c7f9f +0x06d:  movzbl 0x10(%eax),%eax
081c7fa3 +0x071:  cmp    $0x2,%al
081c7fa5 +0x073:  jg     081c7fb2 <+0x80>
081c7fa7 +0x075:  mov    -0x14(%ebp),%eax
081c7faa +0x078:  movzbl 0xf(%eax),%eax
081c7fae +0x07c:  test   %al,%al
081c7fb0 +0x07e:  jns    081c7fbc <+0x8a>
081c7fb2 +0x080:  mov    $0xffffffff,%eax
081c7fb7 +0x085:  jmp    081c8100 <+0x1ce>
081c7fbc +0x08a:  mov    -0x14(%ebp),%eax
081c7fbf +0x08d:  movzbl 0x11(%eax),%eax
081c7fc3 +0x091:  test   %al,%al
081c7fc5 +0x093:  js     081c7fd2 <+0xa0>
081c7fc7 +0x095:  mov    -0x14(%ebp),%eax
081c7fca +0x098:  movzbl 0x11(%eax),%eax
081c7fce +0x09c:  cmp    $0x1,%al
081c7fd0 +0x09e:  jle    081c7fdc <+0xaa>
081c7fd2 +0x0a0:  mov    $0xfffffffe,%eax
081c7fd7 +0x0a5:  jmp    081c8100 <+0x1ce>
081c7fdc +0x0aa:  mov    -0x14(%ebp),%eax
081c7fdf +0x0ad:  movzbl 0x10(%eax),%eax
081c7fe3 +0x0b1:  test   %al,%al
081c7fe5 +0x0b3:  jle    081c7ffc <+0xca>
081c7fe7 +0x0b5:  mov    -0x14(%ebp),%eax
081c7fea +0x0b8:  movzbl 0x11(%eax),%eax
081c7fee +0x0bc:  test   %al,%al
081c7ff0 +0x0be:  jle    081c7ffc <+0xca>
081c7ff2 +0x0c0:  mov    $0x7fffffff,%eax
081c7ff7 +0x0c5:  jmp    081c8100 <+0x1ce>
081c7ffc +0x0ca:  mov    -0x14(%ebp),%eax
081c7fff +0x0cd:  movzbl 0x10(%eax),%eax
081c8003 +0x0d1:  cmp    $0x2,%al
081c8005 +0x0d3:  je     081c8097 <+0x165>
081c800b +0x0d9:  mov    0xc(%ebp),%eax
081c800e +0x0dc:  mov    %eax,(%esp)
081c8011 +0x0df:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
081c8016 +0x0e4:  mov    %eax,-0xc(%ebp)
081c8019 +0x0e7:  cmpl   $0x0,-0xc(%ebp)
081c801d +0x0eb:  jne    081c8029 <+0xf7>
081c801f +0x0ed:  mov    $0x7fffffff,%eax
081c8024 +0x0f2:  jmp    081c8100 <+0x1ce>
081c8029 +0x0f7:  mov    -0xc(%ebp),%eax
081c802c +0x0fa:  mov    %eax,(%esp)
081c802f +0x0fd:  call   08145780 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x203>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x203
081c8034 +0x102:  cmp    0xc(%ebp),%eax
081c8037 +0x105:  setne  %al
081c803a +0x108:  test   %al,%al
081c803c +0x10a:  je     081c8048 <+0x116>
081c803e +0x10c:  mov    $0x7fffffff,%eax
081c8043 +0x111:  jmp    081c8100 <+0x1ce>
081c8048 +0x116:  mov    -0xc(%ebp),%eax
081c804b +0x119:  mov    %eax,(%esp)
081c804e +0x11c:  call   0822d83a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2ee4>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2ee4
081c8053 +0x121:  cmp    $0x1,%al
081c8055 +0x123:  setne  %al
081c8058 +0x126:  test   %al,%al
081c805a +0x128:  je     081c8066 <+0x134>
081c805c +0x12a:  mov    $0x7fffffff,%eax
081c8061 +0x12f:  jmp    081c8100 <+0x1ce>
081c8066 +0x134:  mov    -0x14(%ebp),%eax
081c8069 +0x137:  movzbl 0x11(%eax),%eax
081c806d +0x13b:  cmp    $0x1,%al
081c806f +0x13d:  jne    081c8087 <+0x155>
081c8071 +0x13f:  mov    -0xc(%ebp),%eax
081c8074 +0x142:  mov    %eax,(%esp)
081c8077 +0x145:  call   0822d952 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2ffc>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2ffc
081c807c +0x14a:  test   %al,%al
081c807e +0x14c:  je     081c8087 <+0x155>
081c8080 +0x14e:  mov    $0x1,%eax
081c8085 +0x153:  jmp    081c808c <+0x15a>
081c8087 +0x155:  mov    $0x0,%eax
081c808c +0x15a:  test   %al,%al
081c808e +0x15c:  je     081c8097 <+0x165>
081c8090 +0x15e:  mov    $0x7fffffff,%eax
081c8095 +0x163:  jmp    081c8100 <+0x1ce>
081c8097 +0x165:  mov    -0x14(%ebp),%eax
081c809a +0x168:  movzbl 0x10(%eax),%eax
081c809e +0x16c:  cmp    $0x2,%al
081c80a0 +0x16e:  jne    081c80a9 <+0x177>
081c80a2 +0x170:  mov    $0x0,%eax
081c80a7 +0x175:  jmp    081c8100 <+0x1ce>
081c80a9 +0x177:  mov    0xc(%ebp),%eax
081c80ac +0x17a:  mov    %eax,(%esp)
081c80af +0x17d:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
081c80b4 +0x182:  mov    %eax,-0x10(%ebp)
081c80b7 +0x185:  cmpl   $0x0,-0x10(%ebp)
081c80bb +0x189:  jne    081c80c4 <+0x192>
081c80bd +0x18b:  mov    $0x7fffffff,%eax
081c80c2 +0x190:  jmp    081c8100 <+0x1ce>
081c80c4 +0x192:  mov    -0x10(%ebp),%eax
081c80c7 +0x195:  mov    %eax,(%esp)
081c80ca +0x198:  call   08145780 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x203>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x203
081c80cf +0x19d:  cmp    0xc(%ebp),%eax
081c80d2 +0x1a0:  setne  %al
081c80d5 +0x1a3:  test   %al,%al
081c80d7 +0x1a5:  je     081c80e0 <+0x1ae>
081c80d9 +0x1a7:  mov    $0x7fffffff,%eax
081c80de +0x1ac:  jmp    081c8100 <+0x1ce>
081c80e0 +0x1ae:  mov    -0x10(%ebp),%eax
081c80e3 +0x1b1:  mov    %eax,(%esp)
081c80e6 +0x1b4:  call   0822d83a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2ee4>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2ee4
081c80eb +0x1b9:  cmp    $0x1,%al
081c80ed +0x1bb:  setne  %al
081c80f0 +0x1be:  test   %al,%al
081c80f2 +0x1c0:  je     081c80fb <+0x1c9>
081c80f4 +0x1c2:  mov    $0x7fffffff,%eax
081c80f9 +0x1c7:  jmp    081c8100 <+0x1ce>
081c80fb +0x1c9:  mov    $0x0,%eax
081c8100 +0x1ce:  leave
081c8101 +0x1cf:  ret
```

## 反编译 C

```c
// DisPatcher_SelectDungeon::check_error @ 0x81c7f32

/* DisPatcher_SelectDungeon::check_error(CUser*, MSG_BASE&, ParamBase&) */

undefined4
DisPatcher_SelectDungeon::check_error(CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  CParty *pCVar4;
  MSG_BASE *pMVar5;
  undefined4 uVar6;
  
  iVar3 = CUser::get_state((CUser *)param_2);
  if ((iVar3 == 5) || (iVar3 = CUser::get_state((CUser *)param_2), iVar3 == 0xd)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    return 0x7fffffff;
  }
  cVar2 = CUserCharacInfo::IsBusyDisjointStore((CUserCharacInfo *)param_2);
  if (cVar2 != '\0') {
    return 0x7fffffff;
  }
  if ((((char)param_3[0x10] < '\0') || ('\x02' < (char)param_3[0x10])) ||
     ((char)param_3[0xf] < '\0')) {
    return 0xffffffff;
  }
  if (((char)param_3[0x11] < '\0') || ('\x01' < (char)param_3[0x11])) {
    return 0xfffffffe;
  }
  if (('\0' < (char)param_3[0x10]) && ('\0' < (char)param_3[0x11])) {
    return 0x7fffffff;
  }
  if (param_3[0x10] != (ParamBase)0x2) {
    pCVar4 = (CParty *)CUser::GetParty((CUser *)param_2);
    if (pCVar4 == (CParty *)0x0) {
      return 0x7fffffff;
    }
    pMVar5 = (MSG_BASE *)CParty::getManager(pCVar4);
    if (pMVar5 != param_2) {
      return 0x7fffffff;
    }
    cVar2 = CParty::get_state(pCVar4);
    if (cVar2 != '\x01') {
      return 0x7fffffff;
    }
    if ((param_3[0x11] == (ParamBase)0x1) && (cVar2 = CParty::is_quick_party(pCVar4), cVar2 != '\0')
       ) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      return 0x7fffffff;
    }
  }
  if (param_3[0x10] == (ParamBase)0x2) {
    uVar6 = 0;
  }
  else {
    pCVar4 = (CParty *)CUser::GetParty((CUser *)param_2);
    if (pCVar4 == (CParty *)0x0) {
      uVar6 = 0x7fffffff;
    }
    else {
      pMVar5 = (MSG_BASE *)CParty::getManager(pCVar4);
      if (pMVar5 == param_2) {
        cVar2 = CParty::get_state(pCVar4);
        if (cVar2 == '\x01') {
          uVar6 = 0;
        }
        else {
          uVar6 = 0x7fffffff;
        }
      }
      else {
        uVar6 = 0x7fffffff;
      }
    }
  }
  return uVar6;
}
```
