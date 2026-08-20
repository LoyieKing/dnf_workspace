# IsLimitedSpace

`_ZN13private_store13CPrivateStore14IsLimitedSpaceERKNS_15PrivateStorePosE`

`private_store::CPrivateStore::IsLimitedSpace(private_store::PrivateStorePos const&)`

| 类 | 地址 |
|---|---|
| `private_store::CPrivateStore` | `0x085c4ff2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085c4ff2  _ZN13private_store13CPrivateStore14IsLimitedSpaceERKNS_15PrivateStorePosE
#           private_store::CPrivateStore::IsLimitedSpace(private_store::PrivateStorePos const&)
# range [0x085c4ff2, 0x085c5081]
085c4ff2 +0x00:  push   %ebp
085c4ff3 +0x01:  mov    %esp,%ebp
085c4ff5 +0x03:  mov    0x8(%ebp),%eax
085c4ff8 +0x06:  movzbl 0x24(%eax),%edx
085c4ffc +0x0a:  mov    0xc(%ebp),%eax
085c4fff +0x0d:  movzbl (%eax),%eax
085c5002 +0x10:  cmp    %al,%dl
085c5004 +0x12:  jne    085c507b <+0x89>
085c5006 +0x14:  mov    0x8(%ebp),%eax
085c5009 +0x17:  movzbl 0x25(%eax),%edx
085c500d +0x1b:  mov    0xc(%ebp),%eax
085c5010 +0x1e:  movzbl 0x1(%eax),%eax
085c5014 +0x22:  cmp    %al,%dl
085c5016 +0x24:  jne    085c507b <+0x89>
085c5018 +0x26:  mov    0x8(%ebp),%eax
085c501b +0x29:  movzwl 0x28(%eax),%eax
085c501f +0x2d:  cwtl
085c5020 +0x2e:  lea    -0x32(%eax),%edx
085c5023 +0x31:  mov    0xc(%ebp),%eax
085c5026 +0x34:  movzwl 0x4(%eax),%eax
085c502a +0x38:  cwtl
085c502b +0x39:  cmp    %eax,%edx
085c502d +0x3b:  jge    085c507b <+0x89>
085c502f +0x3d:  mov    0x8(%ebp),%eax
085c5032 +0x40:  movzwl 0x28(%eax),%eax
085c5036 +0x44:  cwtl
085c5037 +0x45:  lea    0x32(%eax),%edx
085c503a +0x48:  mov    0xc(%ebp),%eax
085c503d +0x4b:  movzwl 0x4(%eax),%eax
085c5041 +0x4f:  cwtl
085c5042 +0x50:  cmp    %eax,%edx
085c5044 +0x52:  jle    085c507b <+0x89>
085c5046 +0x54:  mov    0x8(%ebp),%eax
085c5049 +0x57:  movzwl 0x26(%eax),%eax
085c504d +0x5b:  cwtl
085c504e +0x5c:  lea    -0x50(%eax),%edx
085c5051 +0x5f:  mov    0xc(%ebp),%eax
085c5054 +0x62:  movzwl 0x2(%eax),%eax
085c5058 +0x66:  cwtl
085c5059 +0x67:  cmp    %eax,%edx
085c505b +0x69:  jge    085c507b <+0x89>
085c505d +0x6b:  mov    0x8(%ebp),%eax
085c5060 +0x6e:  movzwl 0x26(%eax),%eax
085c5064 +0x72:  cwtl
085c5065 +0x73:  lea    0x50(%eax),%edx
085c5068 +0x76:  mov    0xc(%ebp),%eax
085c506b +0x79:  movzwl 0x2(%eax),%eax
085c506f +0x7d:  cwtl
085c5070 +0x7e:  cmp    %eax,%edx
085c5072 +0x80:  jle    085c507b <+0x89>
085c5074 +0x82:  mov    $0x1,%eax
085c5079 +0x87:  jmp    085c5080 <+0x8e>
085c507b +0x89:  mov    $0x0,%eax
085c5080 +0x8e:  pop    %ebp
085c5081 +0x8f:  ret
```

## 反编译 C

```c
// private_store::CPrivateStore::IsLimitedSpace @ 0x85c4ff2

/* private_store::CPrivateStore::IsLimitedSpace(private_store::PrivateStorePos const&) */

undefined4 __thiscall
private_store::CPrivateStore::IsLimitedSpace(CPrivateStore *this,PrivateStorePos *param_1)

{
  undefined4 uVar1;
  
  if ((((this[0x24] == *(CPrivateStore *)param_1) && (this[0x25] == *(CPrivateStore *)(param_1 + 1))
       ) && (*(short *)(this + 0x28) + -0x32 < (int)*(short *)(param_1 + 4))) &&
     ((((int)*(short *)(param_1 + 4) < *(short *)(this + 0x28) + 0x32 &&
       (*(short *)(this + 0x26) + -0x50 < (int)*(short *)(param_1 + 2))) &&
      ((int)*(short *)(param_1 + 2) < *(short *)(this + 0x26) + 0x50)))) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
```
