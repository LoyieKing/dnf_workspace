# equivalent

`_ZNKSt14error_category10equivalentEiRKSt15error_condition`

`std::error_category::equivalent(int, std::error_condition const&) const`

| 类 | 地址 |
|---|---|
| `std::error_category` | `0x086df5a0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086df5a0  _ZNKSt14error_category10equivalentEiRKSt15error_condition
#           std::error_category::equivalent(int, std::error_condition const&) const
# range [0x086df5a0, 0x086df5ff]
086df5a0 +0x00:  push   %ebp
086df5a1 +0x01:  mov    %esp,%ebp
086df5a3 +0x03:  sub    $0x28,%esp
086df5a6 +0x06:  mov    0x8(%ebp),%eax
086df5a9 +0x09:  lea    -0x10(%ebp),%ecx
086df5ac +0x0c:  mov    %ebx,-0x8(%ebp)
086df5af +0x0f:  mov    0x10(%ebp),%ebx
086df5b2 +0x12:  mov    %esi,-0x4(%ebp)
086df5b5 +0x15:  mov    0xc(%ebp),%esi
086df5b8 +0x18:  mov    (%eax),%edx
086df5ba +0x1a:  mov    %eax,0x4(%esp)
086df5be +0x1e:  mov    %ecx,(%esp)
086df5c1 +0x21:  mov    %esi,0x8(%esp)
086df5c5 +0x25:  call   *0x10(%edx)
086df5c8 +0x28:  mov    -0xc(%ebp),%edx
086df5cb +0x2b:  xor    %eax,%eax
086df5cd +0x2d:  mov    -0x10(%ebp),%ecx
086df5d0 +0x30:  sub    $0x4,%esp
086df5d3 +0x33:  cmp    %edx,0x4(%ebx)
086df5d6 +0x36:  je     086df5e8 <+0x48>
086df5d8 +0x38:  mov    -0x8(%ebp),%ebx
086df5db +0x3b:  mov    -0x4(%ebp),%esi
086df5de +0x3e:  mov    %ebp,%esp
086df5e0 +0x40:  pop    %ebp
086df5e1 +0x41:  ret
086df5e2 +0x42:  lea    0x0(%esi),%esi
086df5e8 +0x48:  cmp    %ecx,(%ebx)
086df5ea +0x4a:  mov    -0x4(%ebp),%esi
086df5ed +0x4d:  mov    -0x8(%ebp),%ebx
086df5f0 +0x50:  sete   %al
086df5f3 +0x53:  mov    %ebp,%esp
086df5f5 +0x55:  pop    %ebp
086df5f6 +0x56:  ret
086df5f7 +0x57:  nop
086df5f8 +0x58:  nop
086df5f9 +0x59:  nop
086df5fa +0x5a:  nop
086df5fb +0x5b:  nop
086df5fc +0x5c:  nop
086df5fd +0x5d:  nop
086df5fe +0x5e:  nop
086df5ff +0x5f:  nop
```

## 反编译 C

```c
// std::error_category::equivalent @ 0x86df5a0

/* std::error_category::equivalent(int, std::error_condition const&) const */

bool __thiscall
std::error_category::equivalent(error_category *this,int param_1,error_condition *param_2)

{
  int local_14;
  int local_10;
  
  (**(code **)(*(int *)this + 0x10))(&local_14,this,param_1);
  if (*(int *)(param_2 + 4) != local_10) {
    return false;
  }
  return *(int *)param_2 == local_14;
}
```
