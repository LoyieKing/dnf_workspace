# Signature

`_ZN9CRijndael9SignatureEPc`

`CRijndael::Signature(char*)`

| 类 | 地址 |
|---|---|
| `CRijndael` | `0x080b6a9e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080b6a9e  _ZN9CRijndael9SignatureEPc
#           CRijndael::Signature(char*)
# range [0x080b6a9e, 0x080b6b9f]
080b6a9e +0x000:  push   %ebp
080b6a9f +0x001:  mov    %esp,%ebp
080b6aa1 +0x003:  push   %edi
080b6aa2 +0x004:  push   %esi
080b6aa3 +0x005:  push   %ebx
080b6aa4 +0x006:  sub    $0xcc,%esp
080b6aaa +0x00c:  lea    -0x4c(%ebp),%ebx
080b6aad +0x00f:  mov    $0x0,%eax
080b6ab2 +0x014:  mov    $0xc,%edx
080b6ab7 +0x019:  mov    %ebx,%edi
080b6ab9 +0x01b:  mov    %edx,%ecx
080b6abb +0x01d:  rep stos %eax,%es:(%edi)
080b6abd +0x01f:  movl   $"RIJDAEL",0x4(%esp)
080b6ac5 +0x027:  lea    -0x4c(%ebp),%eax
080b6ac8 +0x02a:  mov    %eax,(%esp)
080b6acb +0x02d:  call   0807dd60 <_init+0x658>
080b6ad0 +0x032:  lea    -0x4c(%ebp),%eax
080b6ad3 +0x035:  mov    %eax,(%esp)
080b6ad6 +0x038:  call   0807e3b0 <_init+0xca8>
080b6adb +0x03d:  mov    %eax,-0x1c(%ebp)
080b6ade +0x040:  mov    0x8(%ebp),%eax
080b6ae1 +0x043:  mov    0xc(%eax),%eax
080b6ae4 +0x046:  mov    %eax,%edx
080b6ae6 +0x048:  mov    0x8(%ebp),%eax
080b6ae9 +0x04b:  lea    0x18(%eax),%ecx
080b6aec +0x04e:  mov    -0x1c(%ebp),%ebx
080b6aef +0x051:  lea    -0x4c(%ebp),%eax
080b6af2 +0x054:  add    %ebx,%eax
080b6af4 +0x056:  mov    %edx,0x8(%esp)
080b6af8 +0x05a:  mov    %ecx,0x4(%esp)
080b6afc +0x05e:  mov    %eax,(%esp)
080b6aff +0x061:  call   0807d8a0 <_init+0x198>
080b6b04 +0x066:  mov    0x8(%ebp),%eax
080b6b07 +0x069:  mov    0x14(%eax),%esi
080b6b0a +0x06c:  mov    0x8(%ebp),%eax
080b6b0d +0x06f:  mov    0x10(%eax),%ebx
080b6b10 +0x072:  mov    0x8(%ebp),%eax
080b6b13 +0x075:  mov    0xc(%eax),%ecx
080b6b16 +0x078:  mov    0x8(%ebp),%eax
080b6b19 +0x07b:  mov    0x8(%eax),%edx
080b6b1c +0x07e:  mov    0x8(%ebp),%eax
080b6b1f +0x081:  mov    0xc(%eax),%eax
080b6b22 +0x084:  mov    %eax,%edi
080b6b24 +0x086:  mov    -0x1c(%ebp),%eax
080b6b27 +0x089:  add    %eax,%edi
080b6b29 +0x08b:  lea    -0x4c(%ebp),%eax
080b6b2c +0x08e:  add    %edi,%eax
080b6b2e +0x090:  mov    %esi,0x14(%esp)
080b6b32 +0x094:  mov    %ebx,0x10(%esp)
080b6b36 +0x098:  mov    %ecx,0xc(%esp)
080b6b3a +0x09c:  mov    %edx,0x8(%esp)
080b6b3e +0x0a0:  movl   $"%d%d%d%d",0x4(%esp)
080b6b46 +0x0a8:  mov    %eax,(%esp)
080b6b49 +0x0ab:  call   0807e440 <_init+0xd38>
080b6b4e +0x0b0:  lea    -0xb8(%ebp),%eax
080b6b54 +0x0b6:  mov    %eax,(%esp)
080b6b57 +0x0b9:  call   080bb69c <_ZN4CSHAC1Ev>  ; CSHA::CSHA()
080b6b5c +0x0be:  lea    -0x4c(%ebp),%eax
080b6b5f +0x0c1:  mov    %eax,(%esp)
080b6b62 +0x0c4:  call   0807e3b0 <_init+0xca8>
080b6b67 +0x0c9:  mov    %eax,0x8(%esp)
080b6b6b +0x0cd:  lea    -0x4c(%ebp),%eax
080b6b6e +0x0d0:  mov    %eax,0x4(%esp)
080b6b72 +0x0d4:  lea    -0xb8(%ebp),%eax
080b6b78 +0x0da:  mov    %eax,(%esp)
080b6b7b +0x0dd:  call   080bb708 <_ZN4CSHA7AddDataEPKci>  ; CSHA::AddData(char const*, int)
080b6b80 +0x0e2:  mov    0xc(%ebp),%eax
080b6b83 +0x0e5:  mov    %eax,0x4(%esp)
080b6b87 +0x0e9:  lea    -0xb8(%ebp),%eax
080b6b8d +0x0ef:  mov    %eax,(%esp)
080b6b90 +0x0f2:  call   080bb85e <_ZN4CSHA11FinalDigestEPc>  ; CSHA::FinalDigest(char*)
080b6b95 +0x0f7:  add    $0xcc,%esp
080b6b9b +0x0fd:  pop    %ebx
080b6b9c +0x0fe:  pop    %esi
080b6b9d +0x0ff:  pop    %edi
080b6b9e +0x100:  pop    %ebp
080b6b9f +0x101:  ret
```

## 反编译 C

```c
// CRijndael::Signature @ 0x80b6a9e

/* CRijndael::Signature(char*) */

void __thiscall CRijndael::Signature(CRijndael *this,char *param_1)

{
  size_t sVar1;
  int iVar2;
  char *pcVar3;
  CSHA local_bc [108];
  char local_50 [48];
  size_t local_20;
  
  pcVar3 = local_50;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    pcVar3[0] = '\0';
    pcVar3[1] = '\0';
    pcVar3[2] = '\0';
    pcVar3[3] = '\0';
    pcVar3 = pcVar3 + 4;
  }
  strcat(local_50,"RIJDAEL");
  local_20 = strlen(local_50);
  memcpy(local_50 + local_20,this + 0x18,*(size_t *)(this + 0xc));
  sprintf(local_50 + *(int *)(this + 0xc) + local_20,"%d%d%d%d",*(undefined4 *)(this + 8),
          *(undefined4 *)(this + 0xc),*(undefined4 *)(this + 0x10),*(undefined4 *)(this + 0x14));
  CSHA::CSHA(local_bc);
  sVar1 = strlen(local_50);
  CSHA::AddData(local_bc,local_50,sVar1);
  CSHA::FinalDigest(local_bc,param_1);
  return;
}
```
