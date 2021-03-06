// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

// DO NOT EDIT! This file was generated by CustomTasks.DependencyPropertyCodeGen
#pragma once

class RadioButtonsProperties
{
public:
    RadioButtonsProperties();

    void Header(winrt::IInspectable const& value);
    winrt::IInspectable Header();

    void HeaderTemplate(winrt::DataTemplate const& value);
    winrt::DataTemplate HeaderTemplate();

    void Items(winrt::IVector<winrt::IInspectable> const& value);
    winrt::IVector<winrt::IInspectable> Items();

    void ItemsSource(winrt::IInspectable const& value);
    winrt::IInspectable ItemsSource();

    void ItemTemplate(winrt::IInspectable const& value);
    winrt::IInspectable ItemTemplate();

    void MaxColumns(int value);
    int MaxColumns();

    void SelectedIndex(int value);
    int SelectedIndex();

    void SelectedItem(winrt::IInspectable const& value);
    winrt::IInspectable SelectedItem();

    static winrt::DependencyProperty HeaderProperty() { return s_HeaderProperty; }
    static winrt::DependencyProperty HeaderTemplateProperty() { return s_HeaderTemplateProperty; }
    static winrt::DependencyProperty ItemsProperty() { return s_ItemsProperty; }
    static winrt::DependencyProperty ItemsSourceProperty() { return s_ItemsSourceProperty; }
    static winrt::DependencyProperty ItemTemplateProperty() { return s_ItemTemplateProperty; }
    static winrt::DependencyProperty MaxColumnsProperty() { return s_MaxColumnsProperty; }
    static winrt::DependencyProperty SelectedIndexProperty() { return s_SelectedIndexProperty; }
    static winrt::DependencyProperty SelectedItemProperty() { return s_SelectedItemProperty; }

    static GlobalDependencyProperty s_HeaderProperty;
    static GlobalDependencyProperty s_HeaderTemplateProperty;
    static GlobalDependencyProperty s_ItemsProperty;
    static GlobalDependencyProperty s_ItemsSourceProperty;
    static GlobalDependencyProperty s_ItemTemplateProperty;
    static GlobalDependencyProperty s_MaxColumnsProperty;
    static GlobalDependencyProperty s_SelectedIndexProperty;
    static GlobalDependencyProperty s_SelectedItemProperty;

    winrt::event_token SelectionChanged(winrt::SelectionChangedEventHandler const& value);
    void SelectionChanged(winrt::event_token const& token);

    event_source<winrt::SelectionChangedEventHandler> m_selectionChangedEventSource;

    static void EnsureProperties();
    static void ClearProperties();

    static void OnHeaderPropertyChanged(
        winrt::DependencyObject const& sender,
        winrt::DependencyPropertyChangedEventArgs const& args);

    static void OnHeaderTemplatePropertyChanged(
        winrt::DependencyObject const& sender,
        winrt::DependencyPropertyChangedEventArgs const& args);

    static void OnItemsPropertyChanged(
        winrt::DependencyObject const& sender,
        winrt::DependencyPropertyChangedEventArgs const& args);

    static void OnItemsSourcePropertyChanged(
        winrt::DependencyObject const& sender,
        winrt::DependencyPropertyChangedEventArgs const& args);

    static void OnItemTemplatePropertyChanged(
        winrt::DependencyObject const& sender,
        winrt::DependencyPropertyChangedEventArgs const& args);

    static void OnMaxColumnsPropertyChanged(
        winrt::DependencyObject const& sender,
        winrt::DependencyPropertyChangedEventArgs const& args);

    static void OnSelectedIndexPropertyChanged(
        winrt::DependencyObject const& sender,
        winrt::DependencyPropertyChangedEventArgs const& args);

    static void OnSelectedItemPropertyChanged(
        winrt::DependencyObject const& sender,
        winrt::DependencyPropertyChangedEventArgs const& args);
};
