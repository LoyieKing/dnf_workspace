# _generateIPGNo

`_ZNK8WongWork15CCompoundAvatar14_generateIPGNoEPK5CUserlPc`

`WongWork::CCompoundAvatar::_generateIPGNo(CUser const*, long, char*) const`

| 类 | 地址 |
|---|---|
| `WongWork::CCompoundAvatar` | `0x08333df6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08333df6  _ZNK8WongWork15CCompoundAvatar14_generateIPGNoEPK5CUserlPc
#           WongWork::CCompoundAvatar::_generateIPGNo(CUser const*, long, char*) const
# range [0x08333df6, 0x08333ea5]
08333df6 +0x00:  push   %ebp
08333df7 +0x01:  mov    %esp,%ebp
08333df9 +0x03:  push   %edi
08333dfa +0x04:  push   %esi
08333dfb +0x05:  push   %ebx
08333dfc +0x06:  sub    $0x6c,%esp
08333dff +0x09:  lea    -0x48(%ebp),%eax
08333e02 +0x0c:  mov    %eax,0x4(%esp)
08333e06 +0x10:  lea    0x10(%ebp),%eax
08333e09 +0x13:  mov    %eax,(%esp)
08333e0c +0x16:  call   0807e360 <_init+0xc58>
08333e11 +0x1b:  mov    %eax,-0x1c(%ebp)
08333e14 +0x1e:  mov    0xc(%ebp),%eax
08333e17 +0x21:  mov    %eax,(%esp)
08333e1a +0x24:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08333e1f +0x29:  mov    %eax,%esi
08333e21 +0x2b:  mov    -0x1c(%ebp),%eax
08333e24 +0x2e:  mov    0xc(%eax),%edi
08333e27 +0x31:  mov    -0x1c(%ebp),%eax
08333e2a +0x34:  mov    0x10(%eax),%eax
08333e2d +0x37:  add    $0x1,%eax
08333e30 +0x3a:  mov    %eax,-0x4c(%ebp)
08333e33 +0x3d:  mov    -0x1c(%ebp),%eax
08333e36 +0x40:  mov    0x14(%eax),%eax
08333e39 +0x43:  lea    0x76c(%eax),%ecx
08333e3f +0x49:  mov    $0x10624dd3,%edx
08333e44 +0x4e:  mov    %ecx,%eax
08333e46 +0x50:  imul   %edx
08333e48 +0x52:  sar    $0x7,%edx
08333e4b +0x55:  mov    %ecx,%eax
08333e4d +0x57:  sar    $0x1f,%eax
08333e50 +0x5a:  mov    %edx,%ebx
08333e52 +0x5c:  sub    %eax,%ebx
08333e54 +0x5e:  imul   $0x7d0,%ebx,%eax
08333e5a +0x64:  mov    %ecx,%ebx
08333e5c +0x66:  sub    %eax,%ebx
08333e5e +0x68:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
08333e63 +0x6d:  mov    0x1b0(%eax),%eax
08333e69 +0x73:  mov    %esi,0x1c(%esp)
08333e6d +0x77:  mov    %edi,0x18(%esp)
08333e71 +0x7b:  mov    -0x4c(%ebp),%edx
08333e74 +0x7e:  mov    %edx,0x14(%esp)
08333e78 +0x82:  mov    %ebx,0x10(%esp)
08333e7c +0x86:  mov    %eax,0xc(%esp)
08333e80 +0x8a:  movl   $"C%02d%02d%02d%02d%010d",0x8(%esp)
08333e88 +0x92:  movl   $0x14,0x4(%esp)
08333e90 +0x9a:  mov    0x14(%ebp),%eax
08333e93 +0x9d:  mov    %eax,(%esp)
08333e96 +0xa0:  call   0858c81c <_ZN6OS_API8snprintfEPcjPKcz>  ; OS_API::snprintf(char*, unsigned int, char const*, ...)
08333e9b +0xa5:  mov    0x14(%ebp),%eax
08333e9e +0xa8:  add    $0x6c,%esp
08333ea1 +0xab:  pop    %ebx
08333ea2 +0xac:  pop    %esi
08333ea3 +0xad:  pop    %edi
08333ea4 +0xae:  pop    %ebp
08333ea5 +0xaf:  ret
```

## 反编译 C

```c
// WongWork::CCompoundAvatar::_generateIPGNo @ 0x8333df6

/* WongWork::CCompoundAvatar::_generateIPGNo(CUser const*, long, char*) const */

char * __thiscall
WongWork::CCompoundAvatar::_generateIPGNo
          (CCompoundAvatar *this,CUser *param_1,long param_2,char *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  tm local_4c;
  tm *local_20;
  
  local_20 = localtime_r(&param_2,&local_4c);
  uVar4 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
  iVar1 = local_20->tm_mday;
  iVar2 = local_20->tm_mon;
  iVar3 = local_20->tm_year;
  iVar5 = G_CEnvironment();
  OS_API::snprintf(param_3,0x14,"C%02d%02d%02d%02d%010d",*(undefined4 *)(iVar5 + 0x1b0),
                   (iVar3 + 0x76c) % 2000,iVar2 + 1,iVar1,uVar4);
  return param_3;
}
```
