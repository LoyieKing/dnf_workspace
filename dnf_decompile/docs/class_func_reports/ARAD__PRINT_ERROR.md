# ARAD__PRINT_ERROR

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## CheckItemLock

```asm
// === 08197bfd ARAD::PRINT_ERROR::CheckItemLock  [0x08197bfd-0x8197c55] ===
 8197bfd:	55                   	push   %ebp
 8197bfe:	89 e5                	mov    %esp,%ebp
 8197c00:	83 ec 38             	sub    $0x38,%esp
 8197c03:	8b 45 10             	mov    0x10(%ebp),%eax
 8197c06:	66 89 45 f4          	mov    %ax,-0xc(%ebp)
 8197c0a:	8b 45 0c             	mov    0xc(%ebp),%eax
 8197c0d:	89 04 24             	mov    %eax,(%esp)
 8197c10:	e8 39 40 f3 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 8197c15:	0f b7 55 f4          	movzwl -0xc(%ebp),%edx
 8197c19:	89 44 24 1c          	mov    %eax,0x1c(%esp)
 8197c1d:	89 54 24 18          	mov    %edx,0x18(%esp)
 8197c21:	8b 45 08             	mov    0x8(%ebp),%eax
 8197c24:	89 44 24 14          	mov    %eax,0x14(%esp)
 8197c28:	c7 44 24 10 f4 cb b9 	movl   $0x8b9cbf4,0x10(%esp)
 8197c2f:	08 
 8197c30:	c7 44 24 0c a2 02 00 	movl   $0x2a2,0xc(%esp)
 8197c37:	00 
 8197c38:	c7 44 24 08 40 d9 b9 	movl   $0x8b9d940,0x8(%esp)
 8197c3f:	08 
 8197c40:	c7 44 24 04 60 cb b9 	movl   $0x8b9cb60,0x4(%esp)
 8197c47:	08 
 8197c48:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8197c4f:	e8 b6 bf 93 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8197c54:	c9                   	leave
 8197c55:	c3                   	ret

```

```c
// ARAD::PRINT_ERROR::CheckItemLock @ 0x8197bfd

/* ARAD::PRINT_ERROR::CheckItemLock(char*, CUser*, unsigned short) */

void ARAD::PRINT_ERROR::CheckItemLock(char *param_1,CUser *param_2,ushort param_3)

{
  undefined4 uVar1;
  
  uVar1 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
  LogManager::logFormat
            (1,"localjapan/Arad_Function_Set.cpp",
             "void ARAD::PRINT_ERROR::CheckItemLock(char*, CUser*, short unsigned int)",0x2a2,
             "%s : CheckItemLock() fail [slot:%d] [charac_no:%d]",param_1,(uint)param_3,uVar1);
  return;
}

```

---

## delete_item

```asm
// === 08197c56 ARAD::PRINT_ERROR::delete_item  [0x08197c56-0x8197cae] ===
 8197c56:	55                   	push   %ebp
 8197c57:	89 e5                	mov    %esp,%ebp
 8197c59:	83 ec 38             	sub    $0x38,%esp
 8197c5c:	8b 45 10             	mov    0x10(%ebp),%eax
 8197c5f:	66 89 45 f4          	mov    %ax,-0xc(%ebp)
 8197c63:	8b 45 0c             	mov    0xc(%ebp),%eax
 8197c66:	89 04 24             	mov    %eax,(%esp)
 8197c69:	e8 e0 3f f3 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 8197c6e:	0f b7 55 f4          	movzwl -0xc(%ebp),%edx
 8197c72:	89 44 24 1c          	mov    %eax,0x1c(%esp)
 8197c76:	89 54 24 18          	mov    %edx,0x18(%esp)
 8197c7a:	8b 45 08             	mov    0x8(%ebp),%eax
 8197c7d:	89 44 24 14          	mov    %eax,0x14(%esp)
 8197c81:	c7 44 24 10 28 cc b9 	movl   $0x8b9cc28,0x10(%esp)
 8197c88:	08 
 8197c89:	c7 44 24 0c a7 02 00 	movl   $0x2a7,0xc(%esp)
 8197c90:	00 
 8197c91:	c7 44 24 08 e0 d8 b9 	movl   $0x8b9d8e0,0x8(%esp)
 8197c98:	08 
 8197c99:	c7 44 24 04 60 cb b9 	movl   $0x8b9cb60,0x4(%esp)
 8197ca0:	08 
 8197ca1:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8197ca8:	e8 5d bf 93 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8197cad:	c9                   	leave
 8197cae:	c3                   	ret

```

```c
// ARAD::PRINT_ERROR::delete_item @ 0x8197c56

/* ARAD::PRINT_ERROR::delete_item(char*, CUser*, unsigned short) */

void ARAD::PRINT_ERROR::delete_item(char *param_1,CUser *param_2,ushort param_3)

{
  undefined4 uVar1;
  
  uVar1 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
  LogManager::logFormat
            (1,"localjapan/Arad_Function_Set.cpp",
             "void ARAD::PRINT_ERROR::delete_item(char*, CUser*, short unsigned int)",0x2a7,
             "%s : delete_item() [slot:%d] [charac_no:%d]",param_1,(uint)param_3,uVar1);
  return;
}

```

---

## find_item

```asm
// === 08197caf ARAD::PRINT_ERROR::find_item  [0x08197caf-0x8197cff] ===
 8197caf:	55                   	push   %ebp
 8197cb0:	89 e5                	mov    %esp,%ebp
 8197cb2:	83 ec 28             	sub    $0x28,%esp
 8197cb5:	8b 45 0c             	mov    0xc(%ebp),%eax
 8197cb8:	89 04 24             	mov    %eax,(%esp)
 8197cbb:	e8 8e 3f f3 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 8197cc0:	89 44 24 1c          	mov    %eax,0x1c(%esp)
 8197cc4:	8b 45 10             	mov    0x10(%ebp),%eax
 8197cc7:	89 44 24 18          	mov    %eax,0x18(%esp)
 8197ccb:	8b 45 08             	mov    0x8(%ebp),%eax
 8197cce:	89 44 24 14          	mov    %eax,0x14(%esp)
 8197cd2:	c7 44 24 10 54 cc b9 	movl   $0x8b9cc54,0x10(%esp)
 8197cd9:	08 
 8197cda:	c7 44 24 0c ac 02 00 	movl   $0x2ac,0xc(%esp)
 8197ce1:	00 
 8197ce2:	c7 44 24 08 a0 d8 b9 	movl   $0x8b9d8a0,0x8(%esp)
 8197ce9:	08 
 8197cea:	c7 44 24 04 60 cb b9 	movl   $0x8b9cb60,0x4(%esp)
 8197cf1:	08 
 8197cf2:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8197cf9:	e8 0c bf 93 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8197cfe:	c9                   	leave
 8197cff:	c3                   	ret

```

```c
// ARAD::PRINT_ERROR::find_item @ 0x8197caf

/* ARAD::PRINT_ERROR::find_item(char*, CUser*, int) */

void ARAD::PRINT_ERROR::find_item(char *param_1,CUser *param_2,int param_3)

{
  undefined4 uVar1;
  
  uVar1 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
  LogManager::logFormat
            (1,"localjapan/Arad_Function_Set.cpp",
             "void ARAD::PRINT_ERROR::find_item(char*, CUser*, int)",0x2ac,
             "%s : find_item() fail [item_id:%d] [charac_no:%d]",param_1,param_3,uVar1);
  return;
}

```

---

## isEmpty

```asm
// === 08197ba4 ARAD::PRINT_ERROR::isEmpty  [0x08197ba4-0x8197bfc] ===
 8197ba4:	55                   	push   %ebp
 8197ba5:	89 e5                	mov    %esp,%ebp
 8197ba7:	83 ec 38             	sub    $0x38,%esp
 8197baa:	8b 45 10             	mov    0x10(%ebp),%eax
 8197bad:	66 89 45 f4          	mov    %ax,-0xc(%ebp)
 8197bb1:	8b 45 0c             	mov    0xc(%ebp),%eax
 8197bb4:	89 04 24             	mov    %eax,(%esp)
 8197bb7:	e8 92 40 f3 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 8197bbc:	0f b7 55 f4          	movzwl -0xc(%ebp),%edx
 8197bc0:	89 44 24 1c          	mov    %eax,0x1c(%esp)
 8197bc4:	89 54 24 18          	mov    %edx,0x18(%esp)
 8197bc8:	8b 45 08             	mov    0x8(%ebp),%eax
 8197bcb:	89 44 24 14          	mov    %eax,0x14(%esp)
 8197bcf:	c7 44 24 10 cc cb b9 	movl   $0x8b9cbcc,0x10(%esp)
 8197bd6:	08 
 8197bd7:	c7 44 24 0c 9d 02 00 	movl   $0x29d,0xc(%esp)
 8197bde:	00 
 8197bdf:	c7 44 24 08 a0 d9 b9 	movl   $0x8b9d9a0,0x8(%esp)
 8197be6:	08 
 8197be7:	c7 44 24 04 60 cb b9 	movl   $0x8b9cb60,0x4(%esp)
 8197bee:	08 
 8197bef:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8197bf6:	e8 0f c0 93 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8197bfb:	c9                   	leave
 8197bfc:	c3                   	ret

```

```c
// ARAD::PRINT_ERROR::isEmpty @ 0x8197ba4

/* ARAD::PRINT_ERROR::isEmpty(char*, CUser*, unsigned short) */

void ARAD::PRINT_ERROR::isEmpty(char *param_1,CUser *param_2,ushort param_3)

{
  undefined4 uVar1;
  
  uVar1 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
  LogManager::logFormat
            (1,"localjapan/Arad_Function_Set.cpp",
             "void ARAD::PRINT_ERROR::isEmpty(char*, CUser*, short unsigned int)",0x29d,
             "%s : isEmpty() [slot:%d] [charac_no:%d]",param_1,(uint)param_3,uVar1);
  return;
}

```

