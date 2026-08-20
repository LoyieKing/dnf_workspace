# dailyresetData

`_ZN13CEventManager14dailyresetDataEv`

`CEventManager::dailyresetData()`

| 类 | 地址 |
|---|---|
| `CEventManager` | `0x0811630e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0811630e  _ZN13CEventManager14dailyresetDataEv
#           CEventManager::dailyresetData()
# range [0x0811630e, 0x08116385]
0811630e +0x00:  push   %ebp
0811630f +0x01:  mov    %esp,%ebp
08116311 +0x03:  sub    $0x28,%esp
08116314 +0x06:  movl   $0x0,-0xc(%ebp)
0811631b +0x0d:  jmp    08116376 <+0x68>
0811631d +0x0f:  mov    -0xc(%ebp),%edx
08116320 +0x12:  mov    0x8(%ebp),%eax
08116323 +0x15:  mov    (%eax,%edx,4),%eax
08116326 +0x18:  test   %eax,%eax
08116328 +0x1a:  je     08116372 <+0x64>
0811632a +0x1c:  mov    -0xc(%ebp),%edx
0811632d +0x1f:  mov    0x8(%ebp),%eax
08116330 +0x22:  mov    (%eax,%edx,4),%eax
08116333 +0x25:  mov    (%eax),%eax
08116335 +0x27:  add    $0x34,%eax
08116338 +0x2a:  mov    (%eax),%ecx
0811633a +0x2c:  mov    -0xc(%ebp),%edx
0811633d +0x2f:  mov    0x8(%ebp),%eax
08116340 +0x32:  mov    (%eax,%edx,4),%eax
08116343 +0x35:  movl   $0x0,0x4(%esp)
0811634b +0x3d:  mov    %eax,(%esp)
0811634e +0x40:  call   *%ecx
08116350 +0x42:  test   %al,%al
08116352 +0x44:  je     08116372 <+0x64>
08116354 +0x46:  mov    -0xc(%ebp),%edx
08116357 +0x49:  mov    0x8(%ebp),%eax
0811635a +0x4c:  mov    (%eax,%edx,4),%eax
0811635d +0x4f:  mov    (%eax),%eax
0811635f +0x51:  add    $0x24,%eax
08116362 +0x54:  mov    (%eax),%ecx
08116364 +0x56:  mov    -0xc(%ebp),%edx
08116367 +0x59:  mov    0x8(%ebp),%eax
0811636a +0x5c:  mov    (%eax,%edx,4),%eax
0811636d +0x5f:  mov    %eax,(%esp)
08116370 +0x62:  call   *%ecx
08116372 +0x64:  addl   $0x1,-0xc(%ebp)
08116376 +0x68:  cmpl   $0xa5,-0xc(%ebp)
0811637d +0x6f:  setle  %al
08116380 +0x72:  test   %al,%al
08116382 +0x74:  jne    0811631d <+0xf>
08116384 +0x76:  leave
08116385 +0x77:  ret
```

## 反编译 C

```c
// CEventManager::dailyresetData @ 0x811630e

/* CEventManager::dailyresetData() */

void __thiscall CEventManager::dailyresetData(CEventManager *this)

{
  char cVar1;
  int local_10;
  
  for (local_10 = 0; local_10 < 0xa6; local_10 = local_10 + 1) {
    if (*(int *)(this + local_10 * 4) != 0) {
      cVar1 = (**(code **)(**(int **)(this + local_10 * 4) + 0x34))
                        (*(undefined4 *)(this + local_10 * 4),0);
      if (cVar1 != '\0') {
        (**(code **)(**(int **)(this + local_10 * 4) + 0x24))(*(undefined4 *)(this + local_10 * 4));
      }
    }
  }
  return;
}
```
