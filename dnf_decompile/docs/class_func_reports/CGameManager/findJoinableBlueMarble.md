# findJoinableBlueMarble

`_ZN12CGameManager22findJoinableBlueMarbleEv`

`CGameManager::findJoinableBlueMarble()`

| 类 | 地址 |
|---|---|
| `CGameManager` | `0x082a3424` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082a3424  _ZN12CGameManager22findJoinableBlueMarbleEv
#           CGameManager::findJoinableBlueMarble()
# range [0x082a3424, 0x082a3543]
082a3424 +0x000:  push   %ebp
082a3425 +0x001:  mov    %esp,%ebp
082a3427 +0x003:  sub    $0x58,%esp
082a342a +0x006:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
082a342f +0x00b:  mov    %eax,(%esp)
082a3432 +0x00e:  call   08365eea <_ZN12CDataManager19getBlueMarbleScriptEv>  ; CDataManager::getBlueMarbleScript()
082a3437 +0x013:  mov    %eax,-0x14(%ebp)
082a343a +0x016:  cmpl   $0x0,-0x14(%ebp)
082a343e +0x01a:  jne    082a344a <+0x26>
082a3440 +0x01c:  mov    $0x0,%eax
082a3445 +0x021:  jmp    082a3542 <+0x11e>
082a344a +0x026:  mov    -0x14(%ebp),%eax
082a344d +0x029:  mov    0x30(%eax),%eax
082a3450 +0x02c:  mov    %eax,-0x10(%ebp)
082a3453 +0x02f:  movl   $0x0,-0xc(%ebp)
082a345a +0x036:  lea    -0x2c(%ebp),%eax
082a345d +0x039:  mov    %eax,(%esp)
082a3460 +0x03c:  call   082b4f58 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x6e53>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x6e53
082a3465 +0x041:  jmp    082a352e <+0x10a>
082a346a +0x046:  mov    0x8(%ebp),%eax
082a346d +0x049:  lea    0x2e8(%eax),%edx
082a3473 +0x04f:  lea    -0x40(%ebp),%eax
082a3476 +0x052:  mov    %edx,0x4(%esp)
082a347a +0x056:  mov    %eax,(%esp)
082a347d +0x059:  call   082b4f5e <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x6e59>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x6e59
082a3482 +0x05e:  sub    $0x4,%esp
082a3485 +0x061:  mov    -0x40(%ebp),%eax
082a3488 +0x064:  mov    -0x3c(%ebp),%edx
082a348b +0x067:  mov    %eax,-0x2c(%ebp)
082a348e +0x06a:  mov    %edx,-0x28(%ebp)
082a3491 +0x06d:  jmp    082a34f5 <+0xd1>
082a3493 +0x06f:  lea    -0x2c(%ebp),%eax
082a3496 +0x072:  mov    %eax,(%esp)
082a3499 +0x075:  call   082b4832 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x672d>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x672d
082a349e +0x07a:  mov    0x4(%eax),%eax
082a34a1 +0x07d:  mov    %eax,-0xc(%ebp)
082a34a4 +0x080:  cmpl   $0x0,-0xc(%ebp)
082a34a8 +0x084:  je     082a34f5 <+0xd1>
082a34aa +0x086:  mov    -0xc(%ebp),%eax
082a34ad +0x089:  mov    %eax,(%esp)
082a34b0 +0x08c:  call   080d8cb6 <_ZN10BlueMarble9checkJoinEv>  ; BlueMarble::checkJoin()
082a34b5 +0x091:  test   %al,%al
082a34b7 +0x093:  je     082a34d8 <+0xb4>
082a34b9 +0x095:  mov    -0xc(%ebp),%eax
082a34bc +0x098:  mov    %eax,(%esp)
082a34bf +0x09b:  call   080d90da <_ZNK10BlueMarble16getWaitUserCountEv>  ; BlueMarble::getWaitUserCount() const
082a34c4 +0x0a0:  mov    -0x10(%ebp),%edx
082a34c7 +0x0a3:  sub    $0x1,%edx
082a34ca +0x0a6:  cmp    %edx,%eax
082a34cc +0x0a8:  sete   %al
082a34cf +0x0ab:  test   %al,%al
082a34d1 +0x0ad:  je     082a34d8 <+0xb4>
082a34d3 +0x0af:  mov    -0xc(%ebp),%eax
082a34d6 +0x0b2:  jmp    082a3542 <+0x11e>
082a34d8 +0x0b4:  lea    -0x1c(%ebp),%eax
082a34db +0x0b7:  movl   $0x0,0x8(%esp)
082a34e3 +0x0bf:  lea    -0x2c(%ebp),%edx
082a34e6 +0x0c2:  mov    %edx,0x4(%esp)
082a34ea +0x0c6:  mov    %eax,(%esp)
082a34ed +0x0c9:  call   082b4f84 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x6e7f>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x6e7f
082a34f2 +0x0ce:  sub    $0x4,%esp
082a34f5 +0x0d1:  mov    0x8(%ebp),%eax
082a34f8 +0x0d4:  lea    0x2e8(%eax),%edx
082a34fe +0x0da:  lea    -0x24(%ebp),%eax
082a3501 +0x0dd:  mov    %edx,0x4(%esp)
082a3505 +0x0e1:  mov    %eax,(%esp)
082a3508 +0x0e4:  call   082b47ba <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x66b5>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x66b5
082a350d +0x0e9:  sub    $0x4,%esp
082a3510 +0x0ec:  lea    -0x24(%ebp),%eax
082a3513 +0x0ef:  mov    %eax,0x4(%esp)
082a3517 +0x0f3:  lea    -0x2c(%ebp),%eax
082a351a +0x0f6:  mov    %eax,(%esp)
082a351d +0x0f9:  call   082b4846 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x6741>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x6741
082a3522 +0x0fe:  test   %al,%al
082a3524 +0x100:  jne    082a3493 <+0x6f>
082a352a +0x106:  subl   $0x1,-0x10(%ebp)
082a352e +0x10a:  cmpl   $0x0,-0x10(%ebp)
082a3532 +0x10e:  setg   %al
082a3535 +0x111:  test   %al,%al
082a3537 +0x113:  jne    082a346a <+0x46>
082a353d +0x119:  mov    $0x0,%eax
082a3542 +0x11e:  leave
082a3543 +0x11f:  ret
```

## 反编译 C

```c
// CGameManager::findJoinableBlueMarble @ 0x82a3424

/* CGameManager::findJoinableBlueMarble() */

BlueMarble * CGameManager::findJoinableBlueMarble(void)

{
  char cVar1;
  CDataManager *this;
  int iVar2;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_30;
  undefined4 local_2c;
  hash_map<int,BlueMarble*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<BlueMarble*>>
  local_28 [8];
  _Hashtable_iterator<std::pair<int_const,BlueMarble*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,BlueMarble*>>,std::equal_to<int>,std::allocator<BlueMarble*>>
  local_20 [8];
  int local_18;
  int local_14;
  BlueMarble *local_10;
  
  this = (CDataManager *)G_CDataManager();
  local_18 = CDataManager::getBlueMarbleScript(this);
  if (local_18 != 0) {
    local_14 = *(int *)(local_18 + 0x30);
    local_10 = (BlueMarble *)0x0;
    __gnu_cxx::
    _Hashtable_iterator<std::pair<int_const,BlueMarble*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,BlueMarble*>>,std::equal_to<int>,std::allocator<BlueMarble*>>
    ::_Hashtable_iterator();
    for (; 0 < local_14; local_14 = local_14 + -1) {
      __gnu_cxx::
      hash_map<int,BlueMarble*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<BlueMarble*>>
      ::begin((hash_map<int,BlueMarble*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<BlueMarble*>>
               *)&local_44);
      local_30 = local_44;
      local_2c = local_40;
      while( true ) {
        __gnu_cxx::
        hash_map<int,BlueMarble*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<BlueMarble*>>
        ::end(local_28);
        cVar1 = __gnu_cxx::
                _Hashtable_iterator<std::pair<int_const,BlueMarble*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,BlueMarble*>>,std::equal_to<int>,std::allocator<BlueMarble*>>
                ::operator!=((_Hashtable_iterator<std::pair<int_const,BlueMarble*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,BlueMarble*>>,std::equal_to<int>,std::allocator<BlueMarble*>>
                              *)&local_30,(_Hashtable_iterator *)local_28);
        if (cVar1 == '\0') break;
        iVar2 = __gnu_cxx::
                _Hashtable_iterator<std::pair<int_const,BlueMarble*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,BlueMarble*>>,std::equal_to<int>,std::allocator<BlueMarble*>>
                ::operator->((_Hashtable_iterator<std::pair<int_const,BlueMarble*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,BlueMarble*>>,std::equal_to<int>,std::allocator<BlueMarble*>>
                              *)&local_30);
        local_10 = *(BlueMarble **)(iVar2 + 4);
        if (local_10 != (BlueMarble *)0x0) {
          cVar1 = BlueMarble::checkJoin(local_10);
          if ((cVar1 != '\0') &&
             (iVar2 = BlueMarble::getWaitUserCount(local_10), iVar2 == local_14 + -1)) {
            return local_10;
          }
          __gnu_cxx::
          _Hashtable_iterator<std::pair<int_const,BlueMarble*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,BlueMarble*>>,std::equal_to<int>,std::allocator<BlueMarble*>>
          ::operator++(local_20,(int)&local_30);
        }
      }
    }
  }
  return (BlueMarble *)0x0;
}
```
