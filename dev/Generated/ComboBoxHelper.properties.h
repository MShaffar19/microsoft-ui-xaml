// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

// DO NOT EDIT! This file was generated by CustomTasks.DependencyPropertyCodeGen
#pragma once

class ComboBoxHelperProperties
{
public:
    ComboBoxHelperProperties();

    static void SetKeepInteriorCornersSquare(winrt::ComboBox const& target, bool value);
    static bool GetKeepInteriorCornersSquare(winrt::ComboBox const& target);

    static winrt::DependencyProperty KeepInteriorCornersSquareProperty() { return s_KeepInteriorCornersSquareProperty; }

    static GlobalDependencyProperty s_KeepInteriorCornersSquareProperty;

    static void EnsureProperties();
    static void ClearProperties();
};
