# Square

`_ZNK8TaoCrypt12AbstractRing6SquareERKNS_7IntegerE`

`TaoCrypt::AbstractRing::Square(TaoCrypt::Integer const&) const`

| 类 | 地址 |
|---|---|
| `TaoCrypt::AbstractRing` | `0x087a3d60` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087a3d60  _ZNK8TaoCrypt12AbstractRing6SquareERKNS_7IntegerE
#           TaoCrypt::AbstractRing::Square(TaoCrypt::Integer const&) const
# range [0x087a3d60, 0x087a3d7e]
087a3d60 +0x00:  push   %ebp
087a3d61 +0x01:  mov    %esp,%ebp
087a3d63 +0x03:  sub    $0x18,%esp
087a3d66 +0x06:  mov    0x8(%ebp),%eax
087a3d69 +0x09:  mov    0xc(%ebp),%edx
087a3d6c +0x0c:  mov    (%eax),%ecx
087a3d6e +0x0e:  mov    %edx,0x8(%esp)
087a3d72 +0x12:  mov    %edx,0x4(%esp)
087a3d76 +0x16:  mov    %eax,(%esp)
087a3d79 +0x19:  call   *0x40(%ecx)
087a3d7c +0x1c:  leave
087a3d7d +0x1d:  ret
087a3d7e +0x1e:  xchg   %ax,%ax
```

## 反编译 C

```c
// TaoCrypt::AbstractRing::Square @ 0x87a3d60

/* TaoCrypt::AbstractRing::Square(TaoCrypt::Integer const&) const */

void __thiscall TaoCrypt::AbstractRing::Square(AbstractRing *this,Integer *param_1)

{
  (**(code **)(*(int *)this + 0x40))(this,param_1,param_1);
  return;
}
```
