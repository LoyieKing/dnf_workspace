# init

`_ZN20CraneMinigameManager4initEv`

`CraneMinigameManager::init()`

| 类 | 地址 |
|---|---|
| `CraneMinigameManager` | `0x080ebc6e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080ebc6e  _ZN20CraneMinigameManager4initEv
#           CraneMinigameManager::init()
# range [0x080ebc6e, 0x080ebcdf]
080ebc6e +0x00:  push   %ebp
080ebc6f +0x01:  mov    %esp,%ebp
080ebc71 +0x03:  sub    $0x28,%esp
080ebc74 +0x06:  mov    0x8(%ebp),%eax
080ebc77 +0x09:  add    $0x18,%eax
080ebc7a +0x0c:  mov    %eax,(%esp)
080ebc7d +0x0f:  call   080ec026 <_GLOBAL__I__ZN20CraneMinigameManagerC2Ev+0x1d>  ; global constructors keyed to CraneMinigameManager::CraneMinigameManager()+0x1d
080ebc82 +0x14:  mov    0x8(%ebp),%eax
080ebc85 +0x17:  movl   $"Etc/craneMinigameItem.etc",0x4(%esp)
080ebc8d +0x1f:  mov    %eax,(%esp)
080ebc90 +0x22:  call   088e3924 <_Z25importCraneMinigameScriptP19CraneMinigameScriptPKc>  ; importCraneMinigameScript(CraneMinigameScript*, char const*)
080ebc95 +0x27:  xor    $0x1,%eax
080ebc98 +0x2a:  test   %al,%al
080ebc9a +0x2c:  je     080ebcd9 <+0x6b>
080ebc9c +0x2e:  movl   $0x0,0xc(%esp)
080ebca4 +0x36:  movl   $0x1d,0x8(%esp)
080ebcac +0x3e:  movl   $&_ZZN20CraneMinigameManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
080ebcb4 +0x46:  lea    -0x18(%ebp),%eax
080ebcb7 +0x49:  mov    %eax,(%esp)
080ebcba +0x4c:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
080ebcbf +0x51:  movl   $"Error : craneMinigameItem.etc load failed!!",0x4(%esp)
080ebcc7 +0x59:  lea    -0x18(%ebp),%eax
080ebcca +0x5c:  mov    %eax,(%esp)
080ebccd +0x5f:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
080ebcd2 +0x64:  mov    $0x0,%eax
080ebcd7 +0x69:  jmp    080ebcde <+0x70>
080ebcd9 +0x6b:  mov    $0x1,%eax
080ebcde +0x70:  leave
080ebcdf +0x71:  ret
```

## 反编译 C

```c
// CraneMinigameManager::init @ 0x80ebc6e

/* CraneMinigameManager::init() */

bool __thiscall CraneMinigameManager::init(CraneMinigameManager *this)

{
  char cVar1;
  cMyTrace local_1c [24];
  
  Action_SendMail::reset((Action_SendMail *)(this + 0x18));
  cVar1 = importCraneMinigameScript((CraneMinigameScript *)this,"Etc/craneMinigameItem.etc");
  if (cVar1 != '\x01') {
    cMyTrace::cMyTrace(local_1c,"bool CraneMinigameManager::init()",0x1d,0);
    cMyTrace::operator()(local_1c,"Error : craneMinigameItem.etc load failed!!");
  }
  return cVar1 == '\x01';
}
```
