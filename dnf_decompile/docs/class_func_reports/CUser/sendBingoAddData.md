# sendBingoAddData

`_ZN5CUser16sendBingoAddDataEv`

`CUser::sendBingoAddData()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08691470` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08691470  _ZN5CUser16sendBingoAddDataEv
#           CUser::sendBingoAddData()
# range [0x08691470, 0x086914cb]
08691470 +0x00:  push   %ebp
08691471 +0x01:  mov    %esp,%ebp
08691473 +0x03:  sub    $0x18,%esp
08691476 +0x06:  mov    &_ZN10GlobalData15s_event_managerE,%eax
0869147b +0x0b:  movl   $0x6a,0x4(%esp)
08691483 +0x13:  mov    %eax,(%esp)
08691486 +0x16:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
0869148b +0x1b:  mov    (%eax),%edx
0869148d +0x1d:  add    $0x34,%edx
08691490 +0x20:  mov    (%edx),%edx
08691492 +0x22:  movl   $0x0,0x4(%esp)
0869149a +0x2a:  mov    %eax,(%esp)
0869149d +0x2d:  call   *%edx
0869149f +0x2f:  test   %al,%al
086914a1 +0x31:  je     086914c9 <+0x59>
086914a3 +0x33:  mov    0x8(%ebp),%eax
086914a6 +0x36:  mov    %eax,(%esp)
086914a9 +0x39:  call   086912b0 <_ZN5CUser12getBingoDataEv>  ; CUser::getBingoData()
086914ae +0x3e:  movzbl 0x5(%eax),%eax
086914b2 +0x42:  test   %al,%al
086914b4 +0x44:  je     086914c9 <+0x59>
086914b6 +0x46:  movl   $0x1,0x4(%esp)
086914be +0x4e:  mov    0x8(%ebp),%eax
086914c1 +0x51:  mov    %eax,(%esp)
086914c4 +0x54:  call   08690d9a <_ZN5CUser23sendDecorationObjectCntEs>  ; CUser::sendDecorationObjectCnt(short)
086914c9 +0x59:  leave
086914ca +0x5a:  ret
086914cb +0x5b:  nop
```

## 反编译 C

```c
// CUser::sendBingoAddData @ 0x8691470

/* CUser::sendBingoAddData() */

void __thiscall CUser::sendBingoAddData(CUser *this)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x6a);
  cVar1 = (**(code **)(*piVar2 + 0x34))(piVar2,0);
  if (cVar1 != '\0') {
    iVar3 = getBingoData(this);
    if (*(char *)(iVar3 + 5) != '\0') {
      sendDecorationObjectCnt(this,1);
    }
  }
  return;
}
```
