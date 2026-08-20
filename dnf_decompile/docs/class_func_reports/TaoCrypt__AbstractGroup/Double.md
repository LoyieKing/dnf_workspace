# Double

`_ZNK8TaoCrypt13AbstractGroup6DoubleERKNS_7IntegerE`

`TaoCrypt::AbstractGroup::Double(TaoCrypt::Integer const&) const`

| 类 | 地址 |
|---|---|
| `TaoCrypt::AbstractGroup` | `0x087a3d40` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087a3d40  _ZNK8TaoCrypt13AbstractGroup6DoubleERKNS_7IntegerE
#           TaoCrypt::AbstractGroup::Double(TaoCrypt::Integer const&) const
# range [0x087a3d40, 0x087a3d5e]
087a3d40 +0x00:  push   %ebp
087a3d41 +0x01:  mov    %esp,%ebp
087a3d43 +0x03:  sub    $0x18,%esp
087a3d46 +0x06:  mov    0x8(%ebp),%eax
087a3d49 +0x09:  mov    0xc(%ebp),%edx
087a3d4c +0x0c:  mov    (%eax),%ecx
087a3d4e +0x0e:  mov    %edx,0x8(%esp)
087a3d52 +0x12:  mov    %edx,0x4(%esp)
087a3d56 +0x16:  mov    %eax,(%esp)
087a3d59 +0x19:  call   *0x10(%ecx)
087a3d5c +0x1c:  leave
087a3d5d +0x1d:  ret
087a3d5e +0x1e:  xchg   %ax,%ax
```

## 反编译 C

```c
// TaoCrypt::AbstractGroup::Double @ 0x87a3d40

/* TaoCrypt::AbstractGroup::Double(TaoCrypt::Integer const&) const */

void __thiscall TaoCrypt::AbstractGroup::Double(AbstractGroup *this,Integer *param_1)

{
  (**(code **)(*(int *)this + 0x10))(this,param_1,param_1);
  return;
}
```
