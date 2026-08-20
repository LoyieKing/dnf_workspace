# dispatch

`_ZN13DB_SaveCharac8dispatchEiiP6Stream`

`DB_SaveCharac::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_SaveCharac` | `0x08415c98` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08415c98  _ZN13DB_SaveCharac8dispatchEiiP6Stream
#           DB_SaveCharac::dispatch(int, int, Stream*)
# range [0x08415c98, 0x08415dbd]
08415c98 +0x000:  push   %ebp
08415c99 +0x001:  mov    %esp,%ebp
08415c9b +0x003:  sub    $0x38,%esp
08415c9e +0x006:  mov    0x14(%ebp),%eax
08415ca1 +0x009:  mov    %eax,(%esp)
08415ca4 +0x00c:  call   08450a34 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x364a>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x364a
08415ca9 +0x011:  mov    %eax,-0xc(%ebp)
08415cac +0x014:  cmpl   $0x0,-0xc(%ebp)
08415cb0 +0x018:  jne    08415cbc <+0x24>
08415cb2 +0x01a:  mov    $0x0,%eax
08415cb7 +0x01f:  jmp    08415dbc <+0x124>
08415cbc +0x024:  mov    -0xc(%ebp),%eax
08415cbf +0x027:  movzbl 0x4(%eax),%eax
08415cc3 +0x02b:  test   %al,%al
08415cc5 +0x02d:  jne    08415cd2 <+0x3a>
08415cc7 +0x02f:  mov    -0xc(%ebp),%eax
08415cca +0x032:  movzbl 0x6(%eax),%eax
08415cce +0x036:  test   %al,%al
08415cd0 +0x038:  je     08415cf5 <+0x5d>
08415cd2 +0x03a:  mov    -0xc(%ebp),%eax
08415cd5 +0x03d:  mov    %eax,0x4(%esp)
08415cd9 +0x041:  mov    0x8(%ebp),%eax
08415cdc +0x044:  mov    %eax,(%esp)
08415cdf +0x047:  call   08415eda <_ZN13DB_SaveCharac15_SaveCharacInfoEP15SIG_SAVE_CHARAC>  ; DB_SaveCharac::_SaveCharacInfo(SIG_SAVE_CHARAC*)
08415ce4 +0x04c:  xor    $0x1,%eax
08415ce7 +0x04f:  test   %al,%al
08415ce9 +0x051:  je     08415cf5 <+0x5d>
08415ceb +0x053:  mov    $0x0,%eax
08415cf0 +0x058:  jmp    08415dbc <+0x124>
08415cf5 +0x05d:  mov    -0xc(%ebp),%eax
08415cf8 +0x060:  movzbl 0x7(%eax),%eax
08415cfc +0x064:  test   %al,%al
08415cfe +0x066:  je     08415d6c <+0xd4>
08415d00 +0x068:  mov    -0xc(%ebp),%eax
08415d03 +0x06b:  mov    %eax,0x4(%esp)
08415d07 +0x06f:  mov    0x8(%ebp),%eax
08415d0a +0x072:  mov    %eax,(%esp)
08415d0d +0x075:  call   0841690e <_ZN13DB_SaveCharac21_SaveCharacManageInfoEP15SIG_SAVE_CHARAC>  ; DB_SaveCharac::_SaveCharacManageInfo(SIG_SAVE_CHARAC*)
08415d12 +0x07a:  xor    $0x1,%eax
08415d15 +0x07d:  test   %al,%al
08415d17 +0x07f:  je     08415d6c <+0xd4>
08415d19 +0x081:  mov    -0xc(%ebp),%eax
08415d1c +0x084:  movzbl 0x103(%eax),%eax
08415d23 +0x08b:  movzbl %al,%ecx
08415d26 +0x08e:  mov    -0xc(%ebp),%eax
08415d29 +0x091:  mov    0x104(%eax),%edx
08415d2f +0x097:  mov    -0xc(%ebp),%eax
08415d32 +0x09a:  mov    (%eax),%eax
08415d34 +0x09c:  mov    %ecx,0x1c(%esp)
08415d38 +0x0a0:  mov    %edx,0x18(%esp)
08415d3c +0x0a4:  mov    %eax,0x14(%esp)
08415d40 +0x0a8:  movl   $"[SAVE CHARAC MANAGE INFO ERROR] characNo(%u), tagCharacNo(%u), skillIndex(%u)",0x10(%esp)
08415d48 +0x0b0:  movl   $0x3f7d,0xc(%esp)
08415d50 +0x0b8:  movl   $&_ZZN13DB_SaveCharac8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x8(%esp)
08415d58 +0x0c0:  movl   $"DBThread.cpp",0x4(%esp)
08415d60 +0x0c8:  movl   $0x1,(%esp)
08415d67 +0x0cf:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08415d6c +0x0d4:  mov    -0xc(%ebp),%eax
08415d6f +0x0d7:  movzbl 0x5(%eax),%eax
08415d73 +0x0db:  test   %al,%al
08415d75 +0x0dd:  je     08415d97 <+0xff>
08415d77 +0x0df:  mov    -0xc(%ebp),%eax
08415d7a +0x0e2:  mov    %eax,0x4(%esp)
08415d7e +0x0e6:  mov    0x8(%ebp),%eax
08415d81 +0x0e9:  mov    %eax,(%esp)
08415d84 +0x0ec:  call   084163f2 <_ZN13DB_SaveCharac15_SaveCharacStatEP15SIG_SAVE_CHARAC>  ; DB_SaveCharac::_SaveCharacStat(SIG_SAVE_CHARAC*)
08415d89 +0x0f1:  xor    $0x1,%eax
08415d8c +0x0f4:  test   %al,%al
08415d8e +0x0f6:  je     08415d97 <+0xff>
08415d90 +0x0f8:  mov    $0x0,%eax
08415d95 +0x0fd:  jmp    08415dbc <+0x124>
08415d97 +0x0ff:  mov    -0xc(%ebp),%eax
08415d9a +0x102:  movzbl 0x10a(%eax),%eax
08415da1 +0x109:  test   %al,%al
08415da3 +0x10b:  je     08415db7 <+0x11f>
08415da5 +0x10d:  mov    -0xc(%ebp),%eax
08415da8 +0x110:  mov    %eax,0x4(%esp)
08415dac +0x114:  mov    0x8(%ebp),%eax
08415daf +0x117:  mov    %eax,(%esp)
08415db2 +0x11a:  call   08415dbe <_ZN13DB_SaveCharac30_SaveContractOfCubePremiumInfoERK15SIG_SAVE_CHARAC>  ; DB_SaveCharac::_SaveContractOfCubePremiumInfo(SIG_SAVE_CHARAC const&)
08415db7 +0x11f:  mov    $0x1,%eax
08415dbc +0x124:  leave
08415dbd +0x125:  ret
```

## 反编译 C

```c
// DB_SaveCharac::dispatch @ 0x8415c98

/* DB_SaveCharac::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_SaveCharac::dispatch(DB_SaveCharac *this,int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  SIG_SAVE_CHARAC *pSVar2;
  undefined4 uVar3;
  
  pSVar2 = Stream::GetOutBuffer<SIG_SAVE_CHARAC>(param_3);
  if (pSVar2 == (SIG_SAVE_CHARAC *)0x0) {
    uVar3 = 0;
  }
  else {
    if (((pSVar2[4] != (SIG_SAVE_CHARAC)0x0) || (pSVar2[6] != (SIG_SAVE_CHARAC)0x0)) &&
       (cVar1 = _SaveCharacInfo(this,pSVar2), cVar1 != '\x01')) {
      return 0;
    }
    if ((pSVar2[7] != (SIG_SAVE_CHARAC)0x0) &&
       (cVar1 = _SaveCharacManageInfo(this,pSVar2), cVar1 != '\x01')) {
      LogManager::logFormat
                (1,"DBThread.cpp","virtual bool DB_SaveCharac::dispatch(int, int, Stream*)",0x3f7d,
                 "[SAVE CHARAC MANAGE INFO ERROR] characNo(%u), tagCharacNo(%u), skillIndex(%u)",
                 *(undefined4 *)pSVar2,*(undefined4 *)(pSVar2 + 0x104),(uint)(byte)pSVar2[0x103]);
    }
    if ((pSVar2[5] != (SIG_SAVE_CHARAC)0x0) &&
       (cVar1 = _SaveCharacStat(this,pSVar2), cVar1 != '\x01')) {
      return 0;
    }
    if (pSVar2[0x10a] != (SIG_SAVE_CHARAC)0x0) {
      _SaveContractOfCubePremiumInfo(this,pSVar2);
    }
    uVar3 = 1;
  }
  return uVar3;
}
```
