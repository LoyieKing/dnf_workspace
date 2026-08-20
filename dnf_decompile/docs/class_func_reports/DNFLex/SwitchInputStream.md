# SwitchInputStream

`_ZN6DNFLex17SwitchInputStreamEPKcS1_PNS_13stream_data_tE`

`DNFLex::SwitchInputStream(char const*, char const*, DNFLex::stream_data_t*)`

| 类 | 地址 |
|---|---|
| `DNFLex` | `0x08acda50` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08acda50  _ZN6DNFLex17SwitchInputStreamEPKcS1_PNS_13stream_data_tE
#           DNFLex::SwitchInputStream(char const*, char const*, DNFLex::stream_data_t*)
# range [0x08acda50, 0x08acda99]
08acda50 +0x00:  push   %ebp
08acda51 +0x01:  mov    %esp,%ebp
08acda53 +0x03:  sub    $0x38,%esp
08acda56 +0x06:  mov    %ebx,-0xc(%ebp)
08acda59 +0x09:  mov    0x14(%ebp),%eax
08acda5c +0x0c:  mov    0x8(%ebp),%ebx
08acda5f +0x0f:  mov    %esi,-0x8(%ebp)
08acda62 +0x12:  mov    0xc(%ebp),%esi
08acda65 +0x15:  mov    %edi,-0x4(%ebp)
08acda68 +0x18:  mov    0x10(%ebp),%edi
08acda6b +0x1b:  mov    %eax,-0x1c(%ebp)
08acda6e +0x1e:  mov    %ebx,(%esp)
08acda71 +0x21:  call   08acd5b0 <_ZN6DNFLex16CloseInputStreamEv>  ; DNFLex::CloseInputStream()
08acda76 +0x26:  mov    -0x1c(%ebp),%eax
08acda79 +0x29:  mov    %edi,0x10(%ebp)
08acda7c +0x2c:  mov    -0x4(%ebp),%edi
08acda7f +0x2f:  mov    %esi,0xc(%ebp)
08acda82 +0x32:  mov    -0x8(%ebp),%esi
08acda85 +0x35:  mov    %ebx,0x8(%ebp)
08acda88 +0x38:  mov    -0xc(%ebp),%ebx
08acda8b +0x3b:  mov    %eax,0x14(%ebp)
08acda8e +0x3e:  mov    %ebp,%esp
08acda90 +0x40:  pop    %ebp
08acda91 +0x41:  jmp    08acd7d0 <_ZN6DNFLex15PushInputStreamEPKcS1_PNS_13stream_data_tE>  ; DNFLex::PushInputStream(char const*, char const*, DNFLex::stream_data_t*)
08acda96 +0x46:  lea    0x0(%esi),%esi
08acda99 +0x49:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// DNFLex::SwitchInputStream @ 0x8acda50

/* DWARF original prototype: bool SwitchInputStream(DNFLex * this, TCHAR * dir, TCHAR * filename,
   stream_data_t * s) */

bool __thiscall DNFLex::SwitchInputStream(DNFLex *this,TCHAR *dir,TCHAR *filename,stream_data_t *s)

{
  bool bVar1;
  
  CloseInputStream(this);
  bVar1 = PushInputStream(this,dir,filename,s);
  return bVar1;
}
```
