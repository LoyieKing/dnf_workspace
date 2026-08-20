# checkBloodRenewMyRecord

`_ZN6CParty23checkBloodRenewMyRecordEiiii`

`CParty::checkBloodRenewMyRecord(int, int, int, int)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085b8bae` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085b8bae  _ZN6CParty23checkBloodRenewMyRecordEiiii
#           CParty::checkBloodRenewMyRecord(int, int, int, int)
# range [0x085b8bae, 0x085b8bf7]
085b8bae +0x00:  push   %ebp
085b8baf +0x01:  mov    %esp,%ebp
085b8bb1 +0x03:  push   %ebx
085b8bb2 +0x04:  sub    $0x24,%esp
085b8bb5 +0x07:  mov    0x10(%ebp),%ecx
085b8bb8 +0x0a:  mov    0xc(%ebp),%edx
085b8bbb +0x0d:  mov    0x8(%ebp),%ebx
085b8bbe +0x10:  mov    %edx,%eax
085b8bc0 +0x12:  add    %eax,%eax
085b8bc2 +0x14:  add    %edx,%eax
085b8bc4 +0x16:  shl    $0x3,%eax
085b8bc7 +0x19:  lea    (%ebx,%eax,1),%eax
085b8bca +0x1c:  add    $0x78,%eax
085b8bcd +0x1f:  mov    (%eax),%eax
085b8bcf +0x21:  movl   $0x0,0x10(%esp)
085b8bd7 +0x29:  mov    0x18(%ebp),%edx
085b8bda +0x2c:  mov    %edx,0xc(%esp)
085b8bde +0x30:  mov    0x14(%ebp),%edx
085b8be1 +0x33:  mov    %edx,0x8(%esp)
085b8be5 +0x37:  mov    %ecx,0x4(%esp)
085b8be9 +0x3b:  mov    %eax,(%esp)
085b8bec +0x3e:  call   08687fd8 <_ZN15CUserCharacInfo18setBloodBestRecordEjiib>  ; CUserCharacInfo::setBloodBestRecord(unsigned int, int, int, bool)
085b8bf1 +0x43:  add    $0x24,%esp
085b8bf4 +0x46:  pop    %ebx
085b8bf5 +0x47:  pop    %ebp
085b8bf6 +0x48:  ret
085b8bf7 +0x49:  nop
```

## 反编译 C

```c
// CParty::checkBloodRenewMyRecord @ 0x85b8bae

/* CParty::checkBloodRenewMyRecord(int, int, int, int) */

void __thiscall
CParty::checkBloodRenewMyRecord(CParty *this,int param_1,int param_2,int param_3,int param_4)

{
  CUserCharacInfo::setBloodBestRecord
            (*(CUserCharacInfo **)(this + param_1 * 0x18 + 0x78),param_2,param_3,param_4,false);
  return;
}
```
