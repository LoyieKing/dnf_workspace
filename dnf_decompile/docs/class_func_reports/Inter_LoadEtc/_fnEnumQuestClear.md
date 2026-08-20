# _fnEnumQuestClear

`_ZN13Inter_LoadEtc17_fnEnumQuestClearEjPc`

`Inter_LoadEtc::_fnEnumQuestClear(unsigned int, char*)`

| 类 | 地址 |
|---|---|
| `Inter_LoadEtc` | `0x084c2b08` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084c2b08  _ZN13Inter_LoadEtc17_fnEnumQuestClearEjPc
#           Inter_LoadEtc::_fnEnumQuestClear(unsigned int, char*)
# range [0x084c2b08, 0x084c2b81]
084c2b08 +0x00:  push   %ebp
084c2b09 +0x01:  mov    %esp,%ebp
084c2b0b +0x03:  push   %ebx
084c2b0c +0x04:  sub    $0x24,%esp
084c2b0f +0x07:  mov    0xc(%ebp),%eax
084c2b12 +0x0a:  lea    0x4(%eax),%edx
084c2b15 +0x0d:  mov    %edx,0xc(%ebp)
084c2b18 +0x10:  mov    (%eax),%eax
084c2b1a +0x12:  mov    %eax,-0x14(%ebp)
084c2b1d +0x15:  mov    0xc(%ebp),%eax
084c2b20 +0x18:  lea    0x4(%eax),%edx
084c2b23 +0x1b:  mov    %edx,0xc(%ebp)
084c2b26 +0x1e:  mov    (%eax),%eax
084c2b28 +0x20:  mov    %eax,-0x10(%ebp)
084c2b2b +0x23:  mov    0x8(%ebp),%ebx
084c2b2e +0x26:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084c2b33 +0x2b:  mov    %ebx,0x4(%esp)
084c2b37 +0x2f:  mov    %eax,(%esp)
084c2b3a +0x32:  call   0835fdc6 <_ZNK12CDataManager10find_questEi>  ; CDataManager::find_quest(int) const
084c2b3f +0x37:  mov    %eax,-0xc(%ebp)
084c2b42 +0x3a:  cmpl   $0x0,-0xc(%ebp)
084c2b46 +0x3e:  je     084c2b76 <+0x6e>
084c2b48 +0x40:  mov    -0xc(%ebp),%eax
084c2b4b +0x43:  mov    %eax,(%esp)
084c2b4e +0x46:  call   084e923c <_GLOBAL__I__Z7getUserj+0x1ee>  ; global constructors keyed to getUser(unsigned int)+0x1ee
084c2b53 +0x4b:  test   %al,%al
084c2b55 +0x4d:  je     084c2b76 <+0x6e>
084c2b57 +0x4f:  mov    0x8(%ebp),%edx
084c2b5a +0x52:  mov    -0x14(%ebp),%eax
084c2b5d +0x55:  mov    %edx,0x4(%esp)
084c2b61 +0x59:  mov    %eax,(%esp)
084c2b64 +0x5c:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
084c2b69 +0x61:  mov    -0x10(%ebp),%eax
084c2b6c +0x64:  mov    (%eax),%eax
084c2b6e +0x66:  lea    0x1(%eax),%edx
084c2b71 +0x69:  mov    -0x10(%ebp),%eax
084c2b74 +0x6c:  mov    %edx,(%eax)
084c2b76 +0x6e:  mov    $0x1,%eax
084c2b7b +0x73:  add    $0x24,%esp
084c2b7e +0x76:  pop    %ebx
084c2b7f +0x77:  pop    %ebp
084c2b80 +0x78:  ret
084c2b81 +0x79:  nop
```

## 反编译 C

```c
// Inter_LoadEtc::_fnEnumQuestClear @ 0x84c2b08

/* Inter_LoadEtc::_fnEnumQuestClear(unsigned int, char*) */

undefined4 Inter_LoadEtc::_fnEnumQuestClear(uint param_1,char *param_2)

{
  InterfacePacketBuf *this;
  int *piVar1;
  char cVar2;
  int iVar3;
  Quest *this_00;
  
  this = *(InterfacePacketBuf **)param_2;
  piVar1 = *(int **)(param_2 + 4);
  iVar3 = G_CDataManager();
  this_00 = (Quest *)CDataManager::find_quest(iVar3);
  if (this_00 != (Quest *)0x0) {
    cVar2 = Quest::check_clear_send(this_00);
    if (cVar2 != '\0') {
      InterfacePacketBuf::put_short(this,param_1);
      *piVar1 = *piVar1 + 1;
    }
  }
  return 1;
}
```
