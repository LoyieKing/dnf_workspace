# process

`_ZN23Dispatcher_EvadeAssault7processEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_EvadeAssault::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_EvadeAssault` | `0x081ce4f8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081ce4f8  _ZN23Dispatcher_EvadeAssault7processEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_EvadeAssault::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x081ce4f8, 0x081ce581]
081ce4f8 +0x00:  push   %ebp
081ce4f9 +0x01:  mov    %esp,%ebp
081ce4fb +0x03:  sub    $0x28,%esp
081ce4fe +0x06:  mov    0x10(%ebp),%eax
081ce501 +0x09:  mov    %eax,0x8(%esp)
081ce505 +0x0d:  mov    0xc(%ebp),%eax
081ce508 +0x10:  mov    %eax,0x4(%esp)
081ce50c +0x14:  mov    0x8(%ebp),%eax
081ce50f +0x17:  mov    %eax,(%esp)
081ce512 +0x1a:  call   081ce582 <_ZN23Dispatcher_EvadeAssault11check_errorEP5CUserR8MSG_BASE>  ; Dispatcher_EvadeAssault::check_error(CUser*, MSG_BASE&)
081ce517 +0x1f:  mov    %eax,-0xc(%ebp)
081ce51a +0x22:  cmpl   $0x0,-0xc(%ebp)
081ce51e +0x26:  jle    081ce525 <+0x2d>
081ce520 +0x28:  mov    -0xc(%ebp),%eax
081ce523 +0x2b:  jmp    081ce57f <+0x87>
081ce525 +0x2d:  cmpl   $0x0,-0xc(%ebp)
081ce529 +0x31:  jns    081ce532 <+0x3a>
081ce52b +0x33:  mov    $0xffffffff,%eax
081ce530 +0x38:  jmp    081ce57f <+0x87>
081ce532 +0x3a:  call   082350a0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xa74a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xa74a
081ce537 +0x3f:  mov    0xc(%ebp),%edx
081ce53a +0x42:  mov    %edx,0x4(%esp)
081ce53e +0x46:  mov    %eax,(%esp)
081ce541 +0x49:  call   082efbf6 <_ZN11pvp_assault11CAssaultMgr19OnEvadeAssaultPlaceEP5CUser>  ; pvp_assault::CAssaultMgr::OnEvadeAssaultPlace(CUser*)
081ce546 +0x4e:  xor    $0x1,%eax
081ce549 +0x51:  test   %al,%al
081ce54b +0x53:  je     081ce57a <+0x82>
081ce54d +0x55:  mov    0xc(%ebp),%eax
081ce550 +0x58:  mov    %eax,(%esp)
081ce553 +0x5b:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081ce558 +0x60:  mov    %eax,0xc(%esp)
081ce55c +0x64:  movl   $0x0,0x8(%esp)
081ce564 +0x6c:  movl   $&_ZZN23Dispatcher_EvadeAssault7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x4(%esp)
081ce56c +0x74:  movl   $0x27b8,(%esp)
081ce573 +0x7b:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081ce578 +0x80:  jmp    081ce57f <+0x87>
081ce57a +0x82:  mov    $0x0,%eax
081ce57f +0x87:  leave
081ce580 +0x88:  ret
081ce581 +0x89:  nop
```

## 反编译 C

```c
// Dispatcher_EvadeAssault::process @ 0x81ce4f8

/* Dispatcher_EvadeAssault::process(CUser*, MSG_BASE&, ParamBase&) */

int Dispatcher_EvadeAssault::process(CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  char cVar1;
  int iVar2;
  CAssaultMgr *this;
  uint uVar3;
  
  iVar2 = check_error(param_1,param_2);
  if (iVar2 < 1) {
    if (iVar2 < 0) {
      iVar2 = -1;
    }
    else {
      this = (CAssaultMgr *)pvp_assault::GetInstanceAssaultMgr();
      cVar1 = pvp_assault::CAssaultMgr::OnEvadeAssaultPlace(this,(CUser *)param_2);
      if (cVar1 == '\x01') {
        iVar2 = 0;
      }
      else {
        uVar3 = CUser::get_acc_id((CUser *)param_2);
        iVar2 = LineFunc(0x27b8,
                         "virtual int Dispatcher_EvadeAssault::process(CUser*, MSG_BASE&, ParamBase&)"
                         ,0,uVar3);
      }
    }
  }
  return iVar2;
}
```
