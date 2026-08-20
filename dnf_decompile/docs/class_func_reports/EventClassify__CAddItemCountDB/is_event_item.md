# is_event_item

`_ZN13EventClassify15CAddItemCountDB13is_event_itemEi`

`EventClassify::CAddItemCountDB::is_event_item(int)`

| 类 | 地址 |
|---|---|
| `EventClassify::CAddItemCountDB` | `0x0810e08e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810e08e  _ZN13EventClassify15CAddItemCountDB13is_event_itemEi
#           EventClassify::CAddItemCountDB::is_event_item(int)
# range [0x0810e08e, 0x0810e0f3]
0810e08e +0x00:  push   %ebp
0810e08f +0x01:  mov    %esp,%ebp
0810e091 +0x03:  sub    $0x28,%esp
0810e094 +0x06:  mov    0x8(%ebp),%eax
0810e097 +0x09:  mov    0x1c(%eax),%eax
0810e09a +0x0c:  add    $0x8,%eax
0810e09d +0x0f:  mov    %eax,(%esp)
0810e0a0 +0x12:  call   0808e1c0 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x30>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x30
0810e0a5 +0x17:  mov    %eax,-0x10(%ebp)
0810e0a8 +0x1a:  movl   $0x0,-0xc(%ebp)
0810e0af +0x21:  jmp    0810e0e0 <+0x52>
0810e0b1 +0x23:  mov    -0xc(%ebp),%eax
0810e0b4 +0x26:  mov    0x8(%ebp),%edx
0810e0b7 +0x29:  mov    0x1c(%edx),%edx
0810e0ba +0x2c:  add    $0x8,%edx
0810e0bd +0x2f:  mov    %eax,0x4(%esp)
0810e0c1 +0x33:  mov    %edx,(%esp)
0810e0c4 +0x36:  call   0808e1dc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x4c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x4c
0810e0c9 +0x3b:  mov    (%eax),%eax
0810e0cb +0x3d:  cmp    0xc(%ebp),%eax
0810e0ce +0x40:  sete   %al
0810e0d1 +0x43:  test   %al,%al
0810e0d3 +0x45:  je     0810e0dc <+0x4e>
0810e0d5 +0x47:  mov    $0x1,%eax
0810e0da +0x4c:  jmp    0810e0f2 <+0x64>
0810e0dc +0x4e:  addl   $0x1,-0xc(%ebp)
0810e0e0 +0x52:  mov    -0xc(%ebp),%eax
0810e0e3 +0x55:  cmp    -0x10(%ebp),%eax
0810e0e6 +0x58:  setl   %al
0810e0e9 +0x5b:  test   %al,%al
0810e0eb +0x5d:  jne    0810e0b1 <+0x23>
0810e0ed +0x5f:  mov    $0x0,%eax
0810e0f2 +0x64:  leave
0810e0f3 +0x65:  ret
```

## 反编译 C

```c
// EventClassify::CAddItemCountDB::is_event_item @ 0x810e08e

/* EventClassify::CAddItemCountDB::is_event_item(int) */

undefined4 __thiscall
EventClassify::CAddItemCountDB::is_event_item(CAddItemCountDB *this,int param_1)

{
  int iVar1;
  int *piVar2;
  uint local_10;
  
  iVar1 = std::vector<int,std::allocator<int>>::size
                    ((vector<int,std::allocator<int>> *)(*(int *)(this + 0x1c) + 8));
  local_10 = 0;
  while( true ) {
    if (iVar1 <= (int)local_10) {
      return 0;
    }
    piVar2 = (int *)std::vector<int,std::allocator<int>>::operator[]
                              ((vector<int,std::allocator<int>> *)(*(int *)(this + 0x1c) + 8),
                               local_10);
    if (*piVar2 == param_1) break;
    local_10 = local_10 + 1;
  }
  return 1;
}
```
