# CheckLoad

`_ZN15CAppLoadChecker9CheckLoadEiiii`

`CAppLoadChecker::CheckLoad(int, int, int, int)`

| 类 | 地址 |
|---|---|
| `CAppLoadChecker` | `0x086004d8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086004d8  _ZN15CAppLoadChecker9CheckLoadEiiii
#           CAppLoadChecker::CheckLoad(int, int, int, int)
# range [0x086004d8, 0x0860057f]
086004d8 +0x00:  push   %ebp
086004d9 +0x01:  mov    %esp,%ebp
086004db +0x03:  sub    $0x24,%esp
086004de +0x06:  mov    0xc(%ebp),%eax
086004e1 +0x09:  mov    %eax,0x4(%esp)
086004e5 +0x0d:  mov    0x8(%ebp),%eax
086004e8 +0x10:  mov    %eax,(%esp)
086004eb +0x13:  call   085ffcb2 <_ZN15CAppLoadChecker13checkLoad_dbqEi>  ; CAppLoadChecker::checkLoad_dbq(int)
086004f0 +0x18:  mov    %al,-0x4(%ebp)
086004f3 +0x1b:  mov    0x10(%ebp),%eax
086004f6 +0x1e:  mov    %eax,0x4(%esp)
086004fa +0x22:  mov    0x8(%ebp),%eax
086004fd +0x25:  mov    %eax,(%esp)
08600500 +0x28:  call   085ffeb0 <_ZN15CAppLoadChecker16checkLoad_logdbqEi>  ; CAppLoadChecker::checkLoad_logdbq(int)
08600505 +0x2d:  mov    %al,-0x3(%ebp)
08600508 +0x30:  mov    0x14(%ebp),%eax
0860050b +0x33:  mov    %eax,0x4(%esp)
0860050f +0x37:  mov    0x8(%ebp),%eax
08600512 +0x3a:  mov    %eax,(%esp)
08600515 +0x3d:  call   086000b0 <_ZN15CAppLoadChecker16checkLoad_timerqEi>  ; CAppLoadChecker::checkLoad_timerq(int)
0860051a +0x42:  mov    %al,-0x2(%ebp)
0860051d +0x45:  mov    0x18(%ebp),%eax
08600520 +0x48:  mov    %eax,0x4(%esp)
08600524 +0x4c:  mov    0x8(%ebp),%eax
08600527 +0x4f:  mov    %eax,(%esp)
0860052a +0x52:  call   086002b0 <_ZN15CAppLoadChecker17checkLoad_packetqEi>  ; CAppLoadChecker::checkLoad_packetq(int)
0860052f +0x57:  mov    %al,-0x1(%ebp)
08600532 +0x5a:  cmpb   $0x0,-0x4(%ebp)
08600536 +0x5e:  jne    0860054a <+0x72>
08600538 +0x60:  cmpb   $0x0,-0x3(%ebp)
0860053c +0x64:  jne    0860054a <+0x72>
0860053e +0x66:  cmpb   $0x0,-0x2(%ebp)
08600542 +0x6a:  jne    0860054a <+0x72>
08600544 +0x6c:  cmpb   $0x0,-0x1(%ebp)
08600548 +0x70:  je     08600578 <+0xa0>
0860054a +0x72:  mov    0x18(%ebp),%eax
0860054d +0x75:  mov    %eax,0x10(%esp)
08600551 +0x79:  mov    0x14(%ebp),%eax
08600554 +0x7c:  mov    %eax,0xc(%esp)
08600558 +0x80:  mov    0x10(%ebp),%eax
0860055b +0x83:  mov    %eax,0x8(%esp)
0860055f +0x87:  mov    0xc(%ebp),%eax
08600562 +0x8a:  mov    %eax,0x4(%esp)
08600566 +0x8e:  mov    0x8(%ebp),%eax
08600569 +0x91:  mov    %eax,(%esp)
0860056c +0x94:  call   086004b0 <_ZN15CAppLoadChecker8setQueueEiiii>  ; CAppLoadChecker::setQueue(int, int, int, int)
08600571 +0x99:  mov    $0x1,%eax
08600576 +0x9e:  jmp    0860057d <+0xa5>
08600578 +0xa0:  mov    $0x0,%eax
0860057d +0xa5:  leave
0860057e +0xa6:  ret
0860057f +0xa7:  nop
```

## 反编译 C

```c
// CAppLoadChecker::CheckLoad @ 0x86004d8

/* CAppLoadChecker::CheckLoad(int, int, int, int) */

undefined4 __thiscall
CAppLoadChecker::CheckLoad(CAppLoadChecker *this,int param_1,int param_2,int param_3,int param_4)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  undefined4 uVar5;
  
  cVar1 = checkLoad_dbq(this,param_1);
  cVar2 = checkLoad_logdbq(this,param_2);
  cVar3 = checkLoad_timerq(this,param_3);
  cVar4 = checkLoad_packetq(this,param_4);
  if ((((cVar1 == '\0') && (cVar2 == '\0')) && (cVar3 == '\0')) && (cVar4 == '\0')) {
    uVar5 = 0;
  }
  else {
    setQueue(this,param_1,param_2,param_3,param_4);
    uVar5 = 1;
  }
  return uVar5;
}
```
