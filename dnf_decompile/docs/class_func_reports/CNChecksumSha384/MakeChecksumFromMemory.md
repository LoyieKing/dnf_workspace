# MakeChecksumFromMemory

`_ZN16CNChecksumSha38422MakeChecksumFromMemoryEPKhiPhi`

`CNChecksumSha384::MakeChecksumFromMemory(unsigned char const*, int, unsigned char*, int)`

| 类 | 地址 |
|---|---|
| `CNChecksumSha384` | `0x08098ba6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08098ba6  _ZN16CNChecksumSha38422MakeChecksumFromMemoryEPKhiPhi
#           CNChecksumSha384::MakeChecksumFromMemory(unsigned char const*, int, unsigned char*, int)
# range [0x08098ba6, 0x08098c33]
08098ba6 +0x00:  push   %ebp
08098ba7 +0x01:  mov    %esp,%ebp
08098ba9 +0x03:  sub    $0x18,%esp
08098bac +0x06:  mov    0x8(%ebp),%eax
08098baf +0x09:  mov    0x8(%eax),%eax
08098bb2 +0x0c:  test   %eax,%eax
08098bb4 +0x0e:  jne    08098bbd <+0x17>
08098bb6 +0x10:  mov    $0x70000000,%eax
08098bbb +0x15:  jmp    08098c31 <+0x8b>
08098bbd +0x17:  mov    0x8(%ebp),%eax
08098bc0 +0x1a:  mov    (%eax),%eax
08098bc2 +0x1c:  add    $0x20,%eax
08098bc5 +0x1f:  mov    (%eax),%edx
08098bc7 +0x21:  mov    0x8(%ebp),%eax
08098bca +0x24:  mov    %eax,(%esp)
08098bcd +0x27:  call   *%edx
08098bcf +0x29:  cmp    0x18(%ebp),%eax
08098bd2 +0x2c:  setg   %al
08098bd5 +0x2f:  test   %al,%al
08098bd7 +0x31:  je     08098be0 <+0x3a>
08098bd9 +0x33:  mov    $0x70000001,%eax
08098bde +0x38:  jmp    08098c31 <+0x8b>
08098be0 +0x3a:  cmpl   $0x0,0x10(%ebp)
08098be4 +0x3e:  jg     08098bed <+0x47>
08098be6 +0x40:  mov    $0x70000005,%eax
08098beb +0x45:  jmp    08098c31 <+0x8b>
08098bed +0x47:  mov    0x8(%ebp),%eax
08098bf0 +0x4a:  mov    0x8(%eax),%eax
08098bf3 +0x4d:  mov    %eax,(%esp)
08098bf6 +0x50:  call   080c03a1 <_Z11SHA384_InitP15SHA384_ALG_INFO>  ; SHA384_Init(SHA384_ALG_INFO*)
08098bfb +0x55:  mov    0x10(%ebp),%edx
08098bfe +0x58:  mov    0x8(%ebp),%eax
08098c01 +0x5b:  mov    0x8(%eax),%eax
08098c04 +0x5e:  mov    %edx,0x8(%esp)
08098c08 +0x62:  mov    0xc(%ebp),%edx
08098c0b +0x65:  mov    %edx,0x4(%esp)
08098c0f +0x69:  mov    %eax,(%esp)
08098c12 +0x6c:  call   080c0469 <_Z13SHA384_UpdateP15SHA384_ALG_INFOPhm>  ; SHA384_Update(SHA384_ALG_INFO*, unsigned char*, unsigned long)
08098c17 +0x71:  mov    0x8(%ebp),%eax
08098c1a +0x74:  mov    0x8(%eax),%eax
08098c1d +0x77:  mov    0x14(%ebp),%edx
08098c20 +0x7a:  mov    %edx,0x4(%esp)
08098c24 +0x7e:  mov    %eax,(%esp)
08098c27 +0x81:  call   080c062e <_Z12SHA384_FinalP15SHA384_ALG_INFOPh>  ; SHA384_Final(SHA384_ALG_INFO*, unsigned char*)
08098c2c +0x86:  mov    $0x6fffffff,%eax
08098c31 +0x8b:  leave
08098c32 +0x8c:  ret
08098c33 +0x8d:  nop
```

## 反编译 C

```c
// CNChecksumSha384::MakeChecksumFromMemory @ 0x8098ba6

/* CNChecksumSha384::MakeChecksumFromMemory(unsigned char const*, int, unsigned char*, int) */

undefined4 __thiscall
CNChecksumSha384::MakeChecksumFromMemory
          (CNChecksumSha384 *this,uchar *param_1,int param_2,uchar *param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(this + 8) == 0) {
    uVar1 = 0x70000000;
  }
  else {
    iVar2 = (**(code **)(*(int *)this + 0x20))(this);
    if (param_4 < iVar2) {
      uVar1 = 0x70000001;
    }
    else if (param_2 < 1) {
      uVar1 = 0x70000005;
    }
    else {
      SHA384_Init(*(SHA384_ALG_INFO **)(this + 8));
      SHA384_Update(*(SHA384_ALG_INFO **)(this + 8),param_1,param_2);
      SHA384_Final(*(SHA384_ALG_INFO **)(this + 8),param_3);
      uVar1 = 0x6fffffff;
    }
  }
  return uVar1;
}
```
