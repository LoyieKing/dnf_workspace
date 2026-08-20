# is_event_quest

`_ZN13EventClassify15CAddItemCountDB14is_event_questEi`

`EventClassify::CAddItemCountDB::is_event_quest(int)`

| 类 | 地址 |
|---|---|
| `EventClassify::CAddItemCountDB` | `0x0810e0f4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810e0f4  _ZN13EventClassify15CAddItemCountDB14is_event_questEi
#           EventClassify::CAddItemCountDB::is_event_quest(int)
# range [0x0810e0f4, 0x0810e159]
0810e0f4 +0x00:  push   %ebp
0810e0f5 +0x01:  mov    %esp,%ebp
0810e0f7 +0x03:  sub    $0x28,%esp
0810e0fa +0x06:  mov    0x8(%ebp),%eax
0810e0fd +0x09:  mov    0x1c(%eax),%eax
0810e100 +0x0c:  add    $0x14,%eax
0810e103 +0x0f:  mov    %eax,(%esp)
0810e106 +0x12:  call   0808e1c0 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x30>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x30
0810e10b +0x17:  mov    %eax,-0x10(%ebp)
0810e10e +0x1a:  movl   $0x0,-0xc(%ebp)
0810e115 +0x21:  jmp    0810e146 <+0x52>
0810e117 +0x23:  mov    -0xc(%ebp),%eax
0810e11a +0x26:  mov    0x8(%ebp),%edx
0810e11d +0x29:  mov    0x1c(%edx),%edx
0810e120 +0x2c:  add    $0x14,%edx
0810e123 +0x2f:  mov    %eax,0x4(%esp)
0810e127 +0x33:  mov    %edx,(%esp)
0810e12a +0x36:  call   0808e1dc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x4c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x4c
0810e12f +0x3b:  mov    (%eax),%eax
0810e131 +0x3d:  cmp    0xc(%ebp),%eax
0810e134 +0x40:  sete   %al
0810e137 +0x43:  test   %al,%al
0810e139 +0x45:  je     0810e142 <+0x4e>
0810e13b +0x47:  mov    $0x1,%eax
0810e140 +0x4c:  jmp    0810e158 <+0x64>
0810e142 +0x4e:  addl   $0x1,-0xc(%ebp)
0810e146 +0x52:  mov    -0xc(%ebp),%eax
0810e149 +0x55:  cmp    -0x10(%ebp),%eax
0810e14c +0x58:  setl   %al
0810e14f +0x5b:  test   %al,%al
0810e151 +0x5d:  jne    0810e117 <+0x23>
0810e153 +0x5f:  mov    $0x0,%eax
0810e158 +0x64:  leave
0810e159 +0x65:  ret
```

## 反编译 C

```c
// EventClassify::CAddItemCountDB::is_event_quest @ 0x810e0f4

/* EventClassify::CAddItemCountDB::is_event_quest(int) */

undefined4 __thiscall
EventClassify::CAddItemCountDB::is_event_quest(CAddItemCountDB *this,int param_1)

{
  int iVar1;
  int *piVar2;
  uint local_10;
  
  iVar1 = std::vector<int,std::allocator<int>>::size
                    ((vector<int,std::allocator<int>> *)(*(int *)(this + 0x1c) + 0x14));
  local_10 = 0;
  while( true ) {
    if (iVar1 <= (int)local_10) {
      return 0;
    }
    piVar2 = (int *)std::vector<int,std::allocator<int>>::operator[]
                              ((vector<int,std::allocator<int>> *)(*(int *)(this + 0x1c) + 0x14),
                               local_10);
    if (*piVar2 == param_1) break;
    local_10 = local_10 + 1;
  }
  return 1;
}
```
