# _getMemberNames

`_ZN6CParty15_getMemberNamesEPc`

`CParty::_getMemberNames(char*)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085b4bde` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085b4bde  _ZN6CParty15_getMemberNamesEPc
#           CParty::_getMemberNames(char*)
# range [0x085b4bde, 0x085b4d11]
085b4bde +0x000:  push   %ebp
085b4bdf +0x001:  mov    %esp,%ebp
085b4be1 +0x003:  sub    $0x48,%esp
085b4be4 +0x006:  mov    0x8(%ebp),%eax
085b4be7 +0x009:  mov    0x74(%eax),%eax
085b4bea +0x00c:  test   %eax,%eax
085b4bec +0x00e:  je     085b4bfe <+0x20>
085b4bee +0x010:  mov    0x8(%ebp),%eax
085b4bf1 +0x013:  mov    0x74(%eax),%eax
085b4bf4 +0x016:  mov    %eax,(%esp)
085b4bf7 +0x019:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
085b4bfc +0x01e:  jmp    085b4c03 <+0x25>
085b4bfe +0x020:  mov    $"NoMember",%eax
085b4c03 +0x025:  mov    %eax,0x8(%esp)
085b4c07 +0x029:  movl   $"\"%s\",",0x4(%esp)
085b4c0f +0x031:  mov    0xc(%ebp),%eax
085b4c12 +0x034:  mov    %eax,(%esp)
085b4c15 +0x037:  call   0807e440 <_init+0xd38>
085b4c1a +0x03c:  movl   $0x0,-0xc(%ebp)
085b4c21 +0x043:  jmp    085b4cf2 <+0x114>
085b4c26 +0x048:  cmpl   $0x3,-0xc(%ebp)
085b4c2a +0x04c:  jne    085b4c81 <+0xa3>
085b4c2c +0x04e:  mov    -0xc(%ebp),%eax
085b4c2f +0x051:  mov    %eax,0x4(%esp)
085b4c33 +0x055:  mov    0x8(%ebp),%eax
085b4c36 +0x058:  mov    %eax,(%esp)
085b4c39 +0x05b:  call   085b4d12 <_ZN6CParty15_checkValidUserEi>  ; CParty::_checkValidUser(int)
085b4c3e +0x060:  test   %al,%al
085b4c40 +0x062:  je     085b4c63 <+0x85>
085b4c42 +0x064:  mov    -0xc(%ebp),%edx
085b4c45 +0x067:  mov    0x8(%ebp),%ecx
085b4c48 +0x06a:  mov    %edx,%eax
085b4c4a +0x06c:  add    %eax,%eax
085b4c4c +0x06e:  add    %edx,%eax
085b4c4e +0x070:  shl    $0x3,%eax
085b4c51 +0x073:  lea    (%ecx,%eax,1),%eax
085b4c54 +0x076:  add    $0x78,%eax
085b4c57 +0x079:  mov    (%eax),%eax
085b4c59 +0x07b:  mov    %eax,(%esp)
085b4c5c +0x07e:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
085b4c61 +0x083:  jmp    085b4c68 <+0x8a>
085b4c63 +0x085:  mov    $"N/A",%eax
085b4c68 +0x08a:  mov    %eax,0x8(%esp)
085b4c6c +0x08e:  movl   $"\"%s\"",0x4(%esp)
085b4c74 +0x096:  lea    -0x2e(%ebp),%eax
085b4c77 +0x099:  mov    %eax,(%esp)
085b4c7a +0x09c:  call   0807e440 <_init+0xd38>
085b4c7f +0x0a1:  jmp    085b4cd4 <+0xf6>
085b4c81 +0x0a3:  mov    -0xc(%ebp),%eax
085b4c84 +0x0a6:  mov    %eax,0x4(%esp)
085b4c88 +0x0aa:  mov    0x8(%ebp),%eax
085b4c8b +0x0ad:  mov    %eax,(%esp)
085b4c8e +0x0b0:  call   085b4d12 <_ZN6CParty15_checkValidUserEi>  ; CParty::_checkValidUser(int)
085b4c93 +0x0b5:  test   %al,%al
085b4c95 +0x0b7:  je     085b4cb8 <+0xda>
085b4c97 +0x0b9:  mov    -0xc(%ebp),%edx
085b4c9a +0x0bc:  mov    0x8(%ebp),%ecx
085b4c9d +0x0bf:  mov    %edx,%eax
085b4c9f +0x0c1:  add    %eax,%eax
085b4ca1 +0x0c3:  add    %edx,%eax
085b4ca3 +0x0c5:  shl    $0x3,%eax
085b4ca6 +0x0c8:  lea    (%ecx,%eax,1),%eax
085b4ca9 +0x0cb:  add    $0x78,%eax
085b4cac +0x0ce:  mov    (%eax),%eax
085b4cae +0x0d0:  mov    %eax,(%esp)
085b4cb1 +0x0d3:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
085b4cb6 +0x0d8:  jmp    085b4cbd <+0xdf>
085b4cb8 +0x0da:  mov    $"N/A",%eax
085b4cbd +0x0df:  mov    %eax,0x8(%esp)
085b4cc1 +0x0e3:  movl   $"\"%s\",",0x4(%esp)
085b4cc9 +0x0eb:  lea    -0x2e(%ebp),%eax
085b4ccc +0x0ee:  mov    %eax,(%esp)
085b4ccf +0x0f1:  call   0807e440 <_init+0xd38>
085b4cd4 +0x0f6:  movl   $0xff,0x8(%esp)
085b4cdc +0x0fe:  lea    -0x2e(%ebp),%eax
085b4cdf +0x101:  mov    %eax,0x4(%esp)
085b4ce3 +0x105:  mov    0xc(%ebp),%eax
085b4ce6 +0x108:  mov    %eax,(%esp)
085b4ce9 +0x10b:  call   0807e1a0 <_init+0xa98>
085b4cee +0x110:  addl   $0x1,-0xc(%ebp)
085b4cf2 +0x114:  cmpl   $0x3,-0xc(%ebp)
085b4cf6 +0x118:  setle  %al
085b4cf9 +0x11b:  test   %al,%al
085b4cfb +0x11d:  jne    085b4c26 <+0x48>
085b4d01 +0x123:  mov    0xc(%ebp),%eax
085b4d04 +0x126:  add    $0xff,%eax
085b4d09 +0x12b:  movb   $0x0,(%eax)
085b4d0c +0x12e:  mov    0xc(%ebp),%eax
085b4d0f +0x131:  leave
085b4d10 +0x132:  ret
085b4d11 +0x133:  nop
```

## 反编译 C

```c
// CParty::_getMemberNames @ 0x85b4bde

/* CParty::_getMemberNames(char*) */

char * __thiscall CParty::_getMemberNames(CParty *this,char *param_1)

{
  char cVar1;
  char *pcVar2;
  undefined *puVar3;
  char local_32 [34];
  int local_10;
  
  if (*(int *)(this + 0x74) == 0) {
    pcVar2 = "NoMember";
  }
  else {
    pcVar2 = (char *)CUserCharacInfo::getCurCharacName(*(CUserCharacInfo **)(this + 0x74));
  }
  sprintf(param_1,"\"%s\",",pcVar2);
  for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
    if (local_10 == 3) {
      cVar1 = _checkValidUser(this,3);
      if (cVar1 == '\0') {
        puVar3 = &DAT_08cba162;
      }
      else {
        puVar3 = (undefined *)
                 CUserCharacInfo::getCurCharacName
                           (*(CUserCharacInfo **)(this + local_10 * 0x18 + 0x78));
      }
      sprintf(local_32,"\"%s\"",puVar3);
    }
    else {
      cVar1 = _checkValidUser(this,local_10);
      if (cVar1 == '\0') {
        puVar3 = &DAT_08cba162;
      }
      else {
        puVar3 = (undefined *)
                 CUserCharacInfo::getCurCharacName
                           (*(CUserCharacInfo **)(this + local_10 * 0x18 + 0x78));
      }
      sprintf(local_32,"\"%s\",",puVar3);
    }
    strncat(param_1,local_32,0xff);
  }
  param_1[0xff] = '\0';
  return param_1;
}
```
