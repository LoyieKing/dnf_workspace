# getBonusRateEventServer

`_ZNK16channel_script_t23getBonusRateEventServerEhj`

`channel_script_t::getBonusRateEventServer(unsigned char, unsigned int) const`

| 类 | 地址 |
|---|---|
| `channel_script_t` | `0x088dcee2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 088dcee2  _ZNK16channel_script_t23getBonusRateEventServerEhj
#           channel_script_t::getBonusRateEventServer(unsigned char, unsigned int) const
# range [0x088dcee2, 0x088dcf24]
088dcee2 +0x00:  push   %ebp
088dcee3 +0x01:  mov    %esp,%ebp
088dcee5 +0x03:  sub    $0x48,%esp
088dcee8 +0x06:  mov    0xc(%ebp),%eax
088dceeb +0x09:  mov    %al,-0x1c(%ebp)
088dceee +0x0c:  movzbl -0x1c(%ebp),%eax
088dcef2 +0x10:  mov    0x10(%ebp),%edx
088dcef5 +0x13:  mov    %edx,0x8(%esp)
088dcef9 +0x17:  mov    %eax,0x4(%esp)
088dcefd +0x1b:  mov    0x8(%ebp),%eax
088dcf00 +0x1e:  mov    %eax,(%esp)
088dcf03 +0x21:  call   088dcd38 <_ZNK16channel_script_t14getChannelInfoEhj>  ; channel_script_t::getChannelInfo(unsigned char, unsigned int) const
088dcf08 +0x26:  mov    %eax,-0xc(%ebp)
088dcf0b +0x29:  cmpl   $0x0,-0xc(%ebp)
088dcf0f +0x2d:  jne    088dcf18 <+0x36>
088dcf11 +0x2f:  mov    $0x0,%eax
088dcf16 +0x34:  jmp    088dcf1d <+0x3b>
088dcf18 +0x36:  mov    $0x3ca3d70a,%eax
088dcf1d +0x3b:  mov    %eax,-0x2c(%ebp)
088dcf20 +0x3e:  flds   -0x2c(%ebp)
088dcf23 +0x41:  leave
088dcf24 +0x42:  ret
```

## 反编译 C

```c
// channel_script_t::getBonusRateEventServer @ 0x88dcee2

/* channel_script_t::getBonusRateEventServer(unsigned char, unsigned int) const */

longdouble __thiscall
channel_script_t::getBonusRateEventServer(channel_script_t *this,uchar param_1,uint param_2)

{
  int iVar1;
  float fVar2;
  
  iVar1 = getChannelInfo(this,param_1,param_2);
  if (iVar1 == 0) {
    fVar2 = 0.0;
  }
  else {
    fVar2 = 0.02;
  }
  return (longdouble)fVar2;
}
```
