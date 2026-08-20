# dispatch

`_ZN13DB_LoadCharac8dispatchEiiP6Stream`

`DB_LoadCharac::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_LoadCharac` | `0x08408a3c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08408a3c  _ZN13DB_LoadCharac8dispatchEiiP6Stream
#           DB_LoadCharac::dispatch(int, int, Stream*)
# range [0x08408a3c, 0x08408c09]
08408a3c +0x000:  push   %ebp
08408a3d +0x001:  mov    %esp,%ebp
08408a3f +0x003:  sub    $0x28,%esp
08408a42 +0x006:  mov    0x8(%ebp),%eax
08408a45 +0x009:  mov    0x14(%ebp),%edx
08408a48 +0x00c:  mov    %edx,0xc(%esp)
08408a4c +0x010:  mov    0x10(%ebp),%edx
08408a4f +0x013:  mov    %edx,0x8(%esp)
08408a53 +0x017:  mov    0xc(%ebp),%edx
08408a56 +0x01a:  mov    %edx,0x4(%esp)
08408a5a +0x01e:  mov    %eax,(%esp)
08408a5d +0x021:  call   083fbf7c <_ZN12DBDispatcher8dispatchEiiP6Stream>  ; DBDispatcher::dispatch(int, int, Stream*)
08408a62 +0x026:  xor    $0x1,%eax
08408a65 +0x029:  test   %al,%al
08408a67 +0x02b:  je     08408a73 <+0x37>
08408a69 +0x02d:  mov    $0x0,%eax
08408a6e +0x032:  jmp    08408c08 <+0x1cc>
08408a73 +0x037:  mov    0x14(%ebp),%eax
08408a76 +0x03a:  mov    %eax,(%esp)
08408a79 +0x03d:  call   0845079e <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x33b4>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x33b4
08408a7e +0x042:  mov    %eax,-0x10(%ebp)
08408a81 +0x045:  mov    -0x10(%ebp),%eax
08408a84 +0x048:  movl   $0x0,0x8(%eax)
08408a8b +0x04f:  mov    -0x10(%ebp),%eax
08408a8e +0x052:  mov    %eax,0x4(%esp)
08408a92 +0x056:  mov    0x8(%ebp),%eax
08408a95 +0x059:  mov    %eax,(%esp)
08408a98 +0x05c:  call   08408cf4 <_ZN13DB_LoadCharac14_getCharacInfoEP15SIG_LOAD_CHARAC>  ; DB_LoadCharac::_getCharacInfo(SIG_LOAD_CHARAC*)
08408a9d +0x061:  xor    $0x1,%eax
08408aa0 +0x064:  test   %al,%al
08408aa2 +0x066:  je     08408ad0 <+0x94>
08408aa4 +0x068:  movl   $0x4,(%esp)
08408aab +0x06f:  call   08725800 <__cxa_allocate_exception>
08408ab0 +0x074:  mov    %eax,%edx
08408ab2 +0x076:  movl   $0x1,(%edx)
08408ab8 +0x07c:  movl   $0x0,0x8(%esp)
08408ac0 +0x084:  movl   $&_ZTIi,0x4(%esp)
08408ac8 +0x08c:  mov    %eax,(%esp)
08408acb +0x08f:  call   08724c50 <__cxa_throw>
08408ad0 +0x094:  mov    -0x10(%ebp),%eax
08408ad3 +0x097:  mov    %eax,0x4(%esp)
08408ad7 +0x09b:  mov    0x8(%ebp),%eax
08408ada +0x09e:  mov    %eax,(%esp)
08408add +0x0a1:  call   084093f6 <_ZN13DB_LoadCharac14_getCharacStatEP15SIG_LOAD_CHARAC>  ; DB_LoadCharac::_getCharacStat(SIG_LOAD_CHARAC*)
08408ae2 +0x0a6:  xor    $0x1,%eax
08408ae5 +0x0a9:  test   %al,%al
08408ae7 +0x0ab:  je     08408b15 <+0xd9>
08408ae9 +0x0ad:  movl   $0x4,(%esp)
08408af0 +0x0b4:  call   08725800 <__cxa_allocate_exception>
08408af5 +0x0b9:  mov    %eax,%edx
08408af7 +0x0bb:  movl   $0x3,(%edx)
08408afd +0x0c1:  movl   $0x0,0x8(%esp)
08408b05 +0x0c9:  movl   $&_ZTIi,0x4(%esp)
08408b0d +0x0d1:  mov    %eax,(%esp)
08408b10 +0x0d4:  call   08724c50 <__cxa_throw>
08408b15 +0x0d9:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08408b1a +0x0de:  mov    %eax,(%esp)
08408b1d +0x0e1:  call   08110b62 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x74>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x74
08408b22 +0x0e6:  movl   $0x19b,0x4(%esp)
08408b2a +0x0ee:  mov    %eax,(%esp)
08408b2d +0x0f1:  call   0810ba36 <_ZN13EventClassify15CEventScriptMng11is_eventingEi>  ; EventClassify::CEventScriptMng::is_eventing(int)
08408b32 +0x0f6:  test   %al,%al
08408b34 +0x0f8:  je     08408ba3 <+0x167>
08408b36 +0x0fa:  mov    -0x10(%ebp),%eax
08408b39 +0x0fd:  mov    %eax,0x4(%esp)
08408b3d +0x101:  mov    0x8(%ebp),%eax
08408b40 +0x104:  mov    %eax,(%esp)
08408b43 +0x107:  call   08409d2e <_ZN13DB_LoadCharac21_LoadEventBringUpInfoEP15SIG_LOAD_CHARAC>  ; DB_LoadCharac::_LoadEventBringUpInfo(SIG_LOAD_CHARAC*)
08408b48 +0x10c:  xor    $0x1,%eax
08408b4b +0x10f:  test   %al,%al
08408b4d +0x111:  je     08408ba3 <+0x167>
08408b4f +0x113:  movl   $0x4,(%esp)
08408b56 +0x11a:  call   08725800 <__cxa_allocate_exception>
08408b5b +0x11f:  mov    %eax,%edx
08408b5d +0x121:  movl   $0x5,(%edx)
08408b63 +0x127:  movl   $0x0,0x8(%esp)
08408b6b +0x12f:  movl   $&_ZTIi,0x4(%esp)
08408b73 +0x137:  mov    %eax,(%esp)
08408b76 +0x13a:  call   08724c50 <__cxa_throw>
08408b7b +0x13f:  cmp    $0x1,%edx
08408b7e +0x142:  je     08408b88 <+0x14c>
08408b80 +0x144:  mov    %eax,(%esp)
08408b83 +0x147:  call   08ae3750 <_Unwind_Resume>
08408b88 +0x14c:  mov    %eax,(%esp)
08408b8b +0x14f:  call   08725ce0 <__cxa_begin_catch>
08408b90 +0x154:  mov    (%eax),%eax
08408b92 +0x156:  mov    %eax,-0xc(%ebp)
08408b95 +0x159:  mov    -0x10(%ebp),%eax
08408b98 +0x15c:  mov    -0xc(%ebp),%edx
08408b9b +0x15f:  mov    %edx,0x8(%eax)
08408b9e +0x162:  call   08725c30 <__cxa_end_catch>
08408ba3 +0x167:  mov    -0x10(%ebp),%eax
08408ba6 +0x16a:  mov    %eax,0xc(%esp)
08408baa +0x16e:  mov    0x10(%ebp),%eax
08408bad +0x171:  mov    %eax,0x8(%esp)
08408bb1 +0x175:  mov    0xc(%ebp),%eax
08408bb4 +0x178:  mov    %eax,0x4(%esp)
08408bb8 +0x17c:  mov    0x8(%ebp),%eax
08408bbb +0x17f:  mov    %eax,(%esp)
08408bbe +0x182:  call   0840a4ce <_ZN13DB_LoadCharac11_sendResultEiiP15SIG_LOAD_CHARAC>  ; DB_LoadCharac::_sendResult(int, int, SIG_LOAD_CHARAC*)
08408bc3 +0x187:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
08408bc8 +0x18c:  mov    %eax,(%esp)
08408bcb +0x18f:  call   0844dc4e <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x864>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x864
08408bd0 +0x194:  test   %al,%al
08408bd2 +0x196:  je     08408be8 <+0x1ac>
08408bd4 +0x198:  mov    -0x10(%ebp),%eax
08408bd7 +0x19b:  mov    0x682(%eax),%eax
08408bdd +0x1a1:  test   %eax,%eax
08408bdf +0x1a3:  je     08408be8 <+0x1ac>
08408be1 +0x1a5:  mov    $0x1,%eax
08408be6 +0x1aa:  jmp    08408bed <+0x1b1>
08408be8 +0x1ac:  mov    $0x0,%eax
08408bed +0x1b1:  test   %al,%al
08408bef +0x1b3:  je     08408c03 <+0x1c7>
08408bf1 +0x1b5:  mov    -0x10(%ebp),%eax
08408bf4 +0x1b8:  mov    %eax,0x4(%esp)
08408bf8 +0x1bc:  mov    0x8(%ebp),%eax
08408bfb +0x1bf:  mov    %eax,(%esp)
08408bfe +0x1c2:  call   08408c30 <_ZN13DB_LoadCharac19_UpdateSchoolCharacEP15SIG_LOAD_CHARAC>  ; DB_LoadCharac::_UpdateSchoolCharac(SIG_LOAD_CHARAC*)
08408c03 +0x1c7:  mov    $0x1,%eax
08408c08 +0x1cc:  leave
08408c09 +0x1cd:  ret
```

## 反编译 C

```c
// DB_LoadCharac::dispatch @ 0x8408a3c

/* DB_LoadCharac::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_LoadCharac::dispatch(DB_LoadCharac *this,int param_1,int param_2,Stream *param_3)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  SIG_LOAD_CHARAC *pSVar4;
  undefined4 *puVar5;
  CDataManager *this_00;
  CEventScriptMng *this_01;
  GameWorld *this_02;
  SIG_LOAD_CHARAC *pSVar6;
  int iVar7;
  Stream *pSVar8;
  
  iVar7 = param_2;
  pSVar8 = param_3;
  cVar2 = DBDispatcher::dispatch((int)this,param_1,(Stream *)param_2);
  if (cVar2 == '\x01') {
    pSVar4 = Stream::GetOutBuffer<SIG_LOAD_CHARAC>(param_3);
    *(undefined4 *)(pSVar4 + 8) = 0;
    pSVar6 = pSVar4;
                    /* try { // try from 08408a98 to 08408b7a has its CatchHandler @ 08408b7b */
    cVar2 = _getCharacInfo(this,pSVar4);
    if (cVar2 != '\x01') {
      puVar5 = (undefined4 *)__cxa_allocate_exception(4,pSVar6,iVar7,pSVar8);
      *puVar5 = 1;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar5,&int::typeinfo,0);
    }
    pSVar6 = pSVar4;
    cVar2 = _getCharacStat(this,pSVar4);
    if (cVar2 != '\x01') {
      puVar5 = (undefined4 *)__cxa_allocate_exception(4,pSVar6,iVar7,pSVar8);
      *puVar5 = 3;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar5,&int::typeinfo,0);
    }
    this_00 = (CDataManager *)G_CDataManager();
    this_01 = (CEventScriptMng *)CDataManager::get_event_script_mng(this_00);
    cVar2 = EventClassify::CEventScriptMng::is_eventing(this_01,0x19b);
    if (cVar2 != '\0') {
      cVar2 = _LoadEventBringUpInfo(this,pSVar4);
      if (cVar2 != '\x01') {
        puVar5 = (undefined4 *)__cxa_allocate_exception(4);
        *puVar5 = 5;
                    /* WARNING: Subroutine does not return */
        __cxa_throw(puVar5,&int::typeinfo,0);
      }
    }
    _sendResult(this,param_1,param_2,pSVar4);
    this_02 = (GameWorld *)G_GameWorld();
    cVar2 = GameWorld::IsSchoolPvPChannel(this_02);
    if ((cVar2 == '\0') || (*(int *)(pSVar4 + 0x682) == 0)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      _UpdateSchoolCharac(this,pSVar4);
    }
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}
```
