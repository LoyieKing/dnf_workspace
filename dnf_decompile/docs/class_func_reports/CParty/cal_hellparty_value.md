# cal_hellparty_value

`_ZN6CParty19cal_hellparty_valueEiii`

`CParty::cal_hellparty_value(int, int, int)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085b58ac` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085b58ac  _ZN6CParty19cal_hellparty_valueEiii
#           CParty::cal_hellparty_value(int, int, int)
# range [0x085b58ac, 0x085b59c9]
085b58ac +0x000:  push   %ebp
085b58ad +0x001:  mov    %esp,%ebp
085b58af +0x003:  sub    $0x48,%esp
085b58b2 +0x006:  cmpl   $0x0,0x10(%ebp)
085b58b6 +0x00a:  je     085b59c1 <+0x115>
085b58bc +0x010:  cmpl   $0x0,0x14(%ebp)
085b58c0 +0x014:  js     085b59c4 <+0x118>
085b58c6 +0x01a:  cmpl   $0x4,0xc(%ebp)
085b58ca +0x01e:  jg     085b59c7 <+0x11b>
085b58d0 +0x024:  mov    0xc(%ebp),%edx
085b58d3 +0x027:  mov    0x8(%ebp),%eax
085b58d6 +0x02a:  add    $0x348,%edx
085b58dc +0x030:  mov    0x14(%eax,%edx,4),%eax
085b58e0 +0x034:  mov    %eax,-0x1c(%ebp)
085b58e3 +0x037:  mov    0x10(%ebp),%edx
085b58e6 +0x03a:  mov    0x8(%ebp),%eax
085b58e9 +0x03d:  add    $0x344,%edx
085b58ef +0x043:  mov    0x14(%eax,%edx,4),%eax
085b58f3 +0x047:  mov    %eax,-0x18(%ebp)
085b58f6 +0x04a:  mov    0x14(%ebp),%edx
085b58f9 +0x04d:  mov    0x8(%ebp),%eax
085b58fc +0x050:  add    $0x34c,%edx
085b5902 +0x056:  mov    0x18(%eax,%edx,4),%eax
085b5906 +0x05a:  mov    %eax,-0x14(%ebp)
085b5909 +0x05d:  mov    0x8(%ebp),%eax
085b590c +0x060:  mov    0xd58(%eax),%eax
085b5912 +0x066:  mov    %eax,-0x10(%ebp)
085b5915 +0x069:  mov    0x8(%ebp),%eax
085b5918 +0x06c:  mov    0xcac(%eax),%eax
085b591e +0x072:  movzbl 0x89c(%eax),%eax
085b5925 +0x079:  xor    $0x1,%eax
085b5928 +0x07c:  test   %al,%al
085b592a +0x07e:  je     085b5934 <+0x88>
085b592c +0x080:  mov    $0x0,%eax
085b5931 +0x085:  mov    %eax,-0x10(%ebp)
085b5934 +0x088:  mov    0x8(%ebp),%eax
085b5937 +0x08b:  mov    0xb0c(%eax),%eax
085b593d +0x091:  mov    %eax,-0xc(%ebp)
085b5940 +0x094:  mov    0x8(%ebp),%eax
085b5943 +0x097:  mov    0xd18(%eax),%eax
085b5949 +0x09d:  mov    %eax,-0x2c(%ebp)
085b594c +0x0a0:  fildl  -0x2c(%ebp)
085b594f +0x0a3:  fmuls  -0x18(%ebp)
085b5952 +0x0a6:  flds   -0x1c(%ebp)
085b5955 +0x0a9:  fld1
085b5957 +0x0ab:  faddp  %st,%st(1)
085b5959 +0x0ad:  fadds  -0x10(%ebp)
085b595c +0x0b0:  fadds  -0x14(%ebp)
085b595f +0x0b3:  fmulp  %st,%st(1)
085b5961 +0x0b5:  fadds  -0xc(%ebp)
085b5964 +0x0b8:  mov    0x8(%ebp),%eax
085b5967 +0x0bb:  fstps  0xb0c(%eax)
085b596d +0x0c1:  mov    0x8(%ebp),%eax
085b5970 +0x0c4:  flds   0xb0c(%eax)
085b5976 +0x0ca:  fnstcw -0x2e(%ebp)
085b5979 +0x0cd:  movzwl -0x2e(%ebp),%eax
085b597d +0x0d1:  mov    $0xc,%ah
085b597f +0x0d3:  mov    %ax,-0x30(%ebp)
085b5983 +0x0d7:  fldcw  -0x30(%ebp)
085b5986 +0x0da:  fistpl -0x2c(%ebp)
085b5989 +0x0dd:  fldcw  -0x2e(%ebp)
085b598c +0x0e0:  mov    -0x2c(%ebp),%edx
085b598f +0x0e3:  mov    0x8(%ebp),%eax
085b5992 +0x0e6:  mov    0xd0c(%eax),%eax
085b5998 +0x0ec:  cmp    %eax,%edx
085b599a +0x0ee:  jle    085b59b4 <+0x108>
085b599c +0x0f0:  mov    0x8(%ebp),%eax
085b599f +0x0f3:  mov    0xd0c(%eax),%eax
085b59a5 +0x0f9:  mov    %eax,-0x2c(%ebp)
085b59a8 +0x0fc:  fildl  -0x2c(%ebp)
085b59ab +0x0ff:  mov    0x8(%ebp),%eax
085b59ae +0x102:  fstps  0xb0c(%eax)
085b59b4 +0x108:  mov    0x8(%ebp),%eax
085b59b7 +0x10b:  mov    %eax,(%esp)
085b59ba +0x10e:  call   085b697c <_ZN6CParty20send_hellParty_valueEv>  ; CParty::send_hellParty_value()
085b59bf +0x113:  jmp    085b59c8 <+0x11c>
085b59c1 +0x115:  nop
085b59c2 +0x116:  jmp    085b59c8 <+0x11c>
085b59c4 +0x118:  nop
085b59c5 +0x119:  jmp    085b59c8 <+0x11c>
085b59c7 +0x11b:  nop
085b59c8 +0x11c:  leave
085b59c9 +0x11d:  ret
```

## 反编译 C

```c
// CParty::cal_hellparty_value @ 0x85b58ac

/* CParty::cal_hellparty_value(int, int, int) */

void __thiscall CParty::cal_hellparty_value(CParty *this,int param_1,int param_2,int param_3)

{
  float local_14;
  
  if (((param_2 != 0) && (-1 < param_3)) && (param_1 < 5)) {
    local_14 = *(float *)(this + 0xd58);
    if (*(char *)(*(int *)(this + 0xcac) + 0x89c) != '\x01') {
      local_14 = 0.0;
    }
    *(float *)(this + 0xb0c) =
         (*(float *)(this + (param_1 + 0x348) * 4 + 0x14) + 1.0 + local_14 +
         *(float *)(this + (param_3 + 0x34c) * 4 + 0x18)) *
         (float)*(int *)(this + 0xd18) * *(float *)(this + (param_2 + 0x344) * 4 + 0x14) +
         *(float *)(this + 0xb0c);
    if (*(int *)(this + 0xd0c) < (int)ROUND(*(float *)(this + 0xb0c))) {
      *(float *)(this + 0xb0c) = (float)*(int *)(this + 0xd0c);
    }
    send_hellParty_value(this);
  }
  return;
}
```
