# SwitchInputStream

`_ZN14CompiledDNFLex17SwitchInputStreamEPKcS1_Pcj`

`CompiledDNFLex::SwitchInputStream(char const*, char const*, char*, unsigned int)`

| 类 | 地址 |
|---|---|
| `CompiledDNFLex` | `0x08ad0f40` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad0f40  _ZN14CompiledDNFLex17SwitchInputStreamEPKcS1_Pcj
#           CompiledDNFLex::SwitchInputStream(char const*, char const*, char*, unsigned int)
# range [0x08ad0f40, 0x08ad0f99]
08ad0f40 +0x00:  push   %ebp
08ad0f41 +0x01:  mov    %esp,%ebp
08ad0f43 +0x03:  sub    $0x38,%esp
08ad0f46 +0x06:  mov    %ebx,-0xc(%ebp)
08ad0f49 +0x09:  mov    0x14(%ebp),%eax
08ad0f4c +0x0c:  mov    0x8(%ebp),%ebx
08ad0f4f +0x0f:  mov    0x18(%ebp),%edx
08ad0f52 +0x12:  mov    %esi,-0x8(%ebp)
08ad0f55 +0x15:  mov    0xc(%ebp),%esi
08ad0f58 +0x18:  mov    %edi,-0x4(%ebp)
08ad0f5b +0x1b:  mov    0x10(%ebp),%edi
08ad0f5e +0x1e:  mov    %ebx,(%esp)
08ad0f61 +0x21:  mov    %eax,-0x1c(%ebp)
08ad0f64 +0x24:  mov    %edx,-0x20(%ebp)
08ad0f67 +0x27:  call   08ad0e90 <_ZN14CompiledDNFLex16CloseInputStreamEv>  ; CompiledDNFLex::CloseInputStream()
08ad0f6c +0x2c:  mov    -0x20(%ebp),%edx
08ad0f6f +0x2f:  mov    -0x1c(%ebp),%eax
08ad0f72 +0x32:  mov    %edi,0x10(%ebp)
08ad0f75 +0x35:  mov    -0x4(%ebp),%edi
08ad0f78 +0x38:  mov    %esi,0xc(%ebp)
08ad0f7b +0x3b:  mov    -0x8(%ebp),%esi
08ad0f7e +0x3e:  mov    %ebx,0x8(%ebp)
08ad0f81 +0x41:  mov    -0xc(%ebp),%ebx
08ad0f84 +0x44:  mov    %edx,0x18(%ebp)
08ad0f87 +0x47:  mov    %eax,0x14(%ebp)
08ad0f8a +0x4a:  mov    %ebp,%esp
08ad0f8c +0x4c:  pop    %ebp
08ad0f8d +0x4d:  jmp    08ad0a00 <_ZN14CompiledDNFLex15PushInputStreamEPKcS1_Pcj>  ; CompiledDNFLex::PushInputStream(char const*, char const*, char*, unsigned int)
08ad0f92 +0x52:  lea    0x0(%esi,%eiz,1),%esi
08ad0f99 +0x59:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// CompiledDNFLex::SwitchInputStream @ 0x8ad0f40

/* DWARF original prototype: bool SwitchInputStream(CompiledDNFLex * this, TCHAR * dir, TCHAR *
   filename, char * buffer, uint bufferSize) */

bool __thiscall
CompiledDNFLex::SwitchInputStream
          (CompiledDNFLex *this,TCHAR *dir,TCHAR *filename,char *buffer,uint bufferSize)

{
  bool bVar1;
  
  CloseInputStream(this);
  bVar1 = PushInputStream(this,dir,filename,buffer,bufferSize);
  return bVar1;
}
```
